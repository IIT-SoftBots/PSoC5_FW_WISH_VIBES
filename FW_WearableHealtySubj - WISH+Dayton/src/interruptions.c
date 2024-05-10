// ----------------------------------------------------------------------------
// BSD 3-Clause License

// Copyright (c) 2016, qbrobotics
// Copyright (c) 2017-2020, Centro "E.Piaggio"
// All rights reserved.

// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:

// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.

// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.

// * Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.

// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// POSSIBILITY OF SUCH DAMAGE.
// ----------------------------------------------------------------------------

/**
* \file         interruptions.c
*
* \brief        Interruption handling and firmware core functions
* \date         March 20th, 2020
* \author       _Centro "E.Piaggio"_
* \copyright    (C) 2012-2016 qbrobotics. All rights reserved.
* \copyright    (C) 2017-2020 Centro "E.Piaggio". All rights reserved.
*/


//=================================================================     includes
#include "interruptions.h"

//==============================================================================
//                                                            RS485 RX INTERRUPT
//==============================================================================
// Processing RS-485 data frame:
//
// - 0:     Waits for beginning characters
// - 1:     Waits for ID;
// - 2:     Data length;
// - 3:     Receive all bytes;
// - 4:     Wait for another device end of transmission;
//
//==============================================================================

// PWM values needed to obtain 11.5 V given a certain input tension
// Numbers are sperimentally calculated //[index] (millivolts)
static const uint8 pwm_preload_values[29] = {100,    //0 (11500)
                                              83,
                                              78,
                                              76,
                                              74,
                                              72,    //5 (14000)
                                              70,
                                              68,
                                              67,
                                              65,
                                              64,    //10 (16500)
                                              63,
                                              62,
                                              61,
                                              60,
                                              59,    //15 (19000)
                                              58,
                                              57,
                                              56,
                                              56,
                                              55,    //20 (21500)
                                              54,
                                              54,
                                              53,
                                              52,
                                              52,    //25 (24000)
                                              52,
                                              51,
                                              51};   //28 (25500)

//==============================================================================
//                                                            RS485 RX INTERRUPT
//==============================================================================

CY_ISR(ISR_RS485_RX_ExInterrupt) {

    // Set RS485 flag
    
    interrupt_flag = TRUE;
     
}

//==============================================================================
//                                                        CYCLES TIMER INTERRUPT
//==============================================================================
CY_ISR(ISR_CYCLES_Handler){

    // Set cycles interrupt flag
    
    cycles_interrupt_flag = TRUE;
    
    CYCLES_TIMER_STATUS;

}

//==============================================================================
//                                                             INTERRUPT MANAGER
//==============================================================================
// Manage interrupt from RS485 
//==============================================================================
// Processing RS-485 data frame:
//
// - WAIT_START:    Waits for beginning characters;
// - WAIT_ID:       Waits for ID;
// - WAIT_LENGTH:   Data length;
// - RECEIVE:       Receive all bytes;
// - UNLOAD:        Wait for another device end of transmission;
//
//==============================================================================

void interrupt_manager(){
      //===========================================     local variables definition

    static uint8 CYDATA state = WAIT_START;                      // state
    
    //------------------------------------------------- local data packet
    static uint8 CYDATA data_packet_index;
    static uint8 CYDATA data_packet_length;
    static uint8 data_packet_buffer[128];                     
    static uint8 CYDATA rx_queue[3];                    // last 2 bytes received
    //-------------------------------------------------

    uint8 CYDATA    rx_data;                            // RS485 UART rx data
    CYBIT           rx_data_type = TRUE;                       // my id?
    uint8 CYDATA    package_count = 0;                     

    //======================================================     receive routine
    
    while(UART_RS485_GetRxBufferSize() && (package_count < 100)){
        // 100 - estimated maximum number of packets we can read without blocking firmware execution

        // Get next char
        rx_data = UART_RS485_GetChar();
        
        switch (state) {
            //-----     wait for frame start     -------------------------------
            case WAIT_START:
            
                rx_queue[0] = rx_queue[1];
                rx_queue[1] = rx_queue[2];
                rx_queue[2] = rx_data;
                
                // Check for header configuration package
                if ((rx_queue[1] == 58) && (rx_queue[2] == 58)) {
                    rx_queue[0] = 0;
                    rx_queue[1] = 0;
                    rx_queue[2] = 0;
                    state       = WAIT_ID;                    
                }
                else
                    if ((rx_queue[0] == 63) &&      //ASCII - ?
                        (rx_queue[1] == 13) &&      //ASCII - CR
                        (rx_queue[2] == 10))        //ASCII - LF)
                        infoGet(INFO_ALL);
                break;

            //-----     wait for id     ----------------------------------------
            case  WAIT_ID:

                // packet is for my ID or is broadcast
#ifdef MASTER_FW
                if (rx_data == c_mem.dev.id || rx_data == 0 || (master_mode && rx_data == c_mem.MS.slave_ID))
                   rx_data_type = FALSE;
                else                //packet is for others
                    rx_data_type = TRUE;
#else
                if (rx_data == c_mem.dev.id || rx_data == 0)
                    rx_data_type = FALSE;
                else                //packet is for others
                    rx_data_type = TRUE;
#endif                
                data_packet_length = 0;
                state = WAIT_LENGTH;
                break;

            //-----     wait for length     ------------------------------------
            case  WAIT_LENGTH:

                data_packet_length = rx_data;
                // check validity of pack length
                if (data_packet_length <= 1) {
                    data_packet_length = 0;
                    state = WAIT_START;
                } else if (data_packet_length > 128) {
                    data_packet_length = 0;
                    state = WAIT_START;
                } else {
                    data_packet_index = 0;
                    
                    if(rx_data_type == FALSE)
                        state = RECEIVE;          // packet for me or broadcast
                    else
                        state = UNLOAD;           // packet for others
                }
                break;

            //-----     receiving     -------------------------------------------
            case RECEIVE:

                data_packet_buffer[data_packet_index] = rx_data;
                data_packet_index++;
                
                // check end of transmission
                if (data_packet_index >= data_packet_length) {
                    // verify if frame ID corresponded to the device ID
                    if (rx_data_type == FALSE) {
                        // copying data from buffer to global packet
                        memcpy(g_rx.buffer, data_packet_buffer, data_packet_length);
                        g_rx.length = data_packet_length;
                        g_rx.ready  = 1;
                        commProcess();
                    }
                    
                    data_packet_index  = 0;
                    data_packet_length = 0;
                    state              = WAIT_START;
                    package_count++;
                
                }
                break;

            //-----     other device is receving     ---------------------------
            case UNLOAD:
                if (!(--data_packet_length)) {
                    data_packet_index  = 0;
                    data_packet_length = 0;
                    RS485_CTS_Write(1);
                    RS485_CTS_Write(0);
                    state              = WAIT_START;
                    package_count++;
                }
                break;
        }
    }
}
//==============================================================================
//                                                            FUNCTION SCHEDULER
//==============================================================================
// Call all the function with the right frequency
//==============================================================================
// Base frequency 5000 Hz (110 us - max. 200 us cycle time)
//==============================================================================

void function_scheduler(void) {
      
    MY_TIMER_REG_Write(0x00);
    timer_value0 = (uint32)MY_TIMER_ReadCounter();
    // Start ADC Conversion, SOC = 1
    ADC_SOC_Write(0x01); 
    flag_master = MASTER_MODE_FLAG_Read();

    // Check Interrupt 

    if (interrupt_flag){
        interrupt_flag = FALSE;
        interrupt_manager();
    }
   
    // if master_mode parameter is set to 1
    if (g_mem.MS.master_mode_active){  
        
        // Check if voltage on pin MASTER MODE VOLTAGE, set by a physical switch, is HIGH or LOW. 
        // This is a way to force exit from master_mode during execution, since USB commands from PC 
        // are hampered by the communications between the two boards (slave and master)
        
        if (!flag_master)       // if voltage is LOW, exit master mode
            master_mode = 0;
        
        else if (flag_master)  // if voltage is HIGH, enter master mode
            master_mode = 1;
    }
            
    else{
        master_mode = 0;
    }
                    
    if (master_mode){
        
        LED_CONTROL_Write(RED);     // Orange
        
        //-------------------------------------------------------------- Air Chamber and Vibrotactile control
        if (g_mem.FB.vibrotactile_feedback_active && g_mem.FB.airchamber_feedback_active){                  
            air_chambers_control();
            vibrotactile_control();
        }
        
        //-------------------------------------------------------------- Air Chamber control
        else if (g_mem.FB.airchamber_feedback_active){
            air_chambers_control();
            
        }
    
        //-------------------------------------------------------------- Vibrotactile control
        else if (g_mem.FB.vibrotactile_feedback_active){
            vibrotactile_control();
        }
        
        if (interrupt_flag){
            interrupt_flag = FALSE;
            interrupt_manager();
        }
            
       compute_SH_reference(); // Compute reference for the SH starting from EMG values
            
        drive_slave(c_mem.MS.slave_ID); // Send reference to the SH calling cmd_set_inputs
            
        if (interrupt_flag){
            interrupt_flag = FALSE;
            interrupt_manager();
        }
    }
            
           
    else {
        
        LED_CONTROL_Write(GREEN);     // Red
            
        // Check Interrupt 
        if (interrupt_flag){
            interrupt_flag = FALSE;
            interrupt_manager();
        } 
    }
    
    pump_control();  // Compute references and drive air pump
    VT_control();  // Compute references and drive air pump

    if (interrupt_flag){
        interrupt_flag = FALSE;
        interrupt_manager();
    }
               
    //---------------------------------- Read conversion buffer - LOCK function

    analog_read_end();

    if (interrupt_flag){
        interrupt_flag = FALSE;
        interrupt_manager();
    }  
   
    //---------------------------------- Update States

    // Load k-1 state
    memcpy( &g_adc_measOld, &g_adc_meas, sizeof(g_adc_meas) );
    memcpy( &SH_refOld, &SH_ref, sizeof(SH_ref) );
    memcpy( &VT_refOld, &VT_ref, sizeof(VT_ref) );
    memcpy( &Pump_refOld, &Pump_ref, sizeof(Pump_ref) );
    
    // Load k+1 state        
    memcpy( &SH_ref, &SH_refNew, sizeof(SH_ref) );   
    memcpy( &VT_ref, &VT_refNew, sizeof(VT_ref) );
    memcpy( &Pump_ref, &Pump_refNew, sizeof(Pump_ref) );
    
    if (interrupt_flag){
        interrupt_flag = FALSE;
        interrupt_manager();
    }
    
    timer_value = (uint16)MY_TIMER_ReadCounter();
    cycle_time = ((float)(timer_value0 - timer_value)/48.0);
    MY_TIMER_REG_Write(0x01);   // reset timer

}

//==============================================================================
//                                                       COMPUTE MOTOR REFERENCE
//==============================================================================

void compute_SH_reference() {
    
    int32 CYDATA err_emg_1, err_emg_2;
    struct st_slave* SH = &c_mem.SH_config;      // SoftHand default motor
    
    static uint8 current_emg = 0;   // 0 NONE // 1 EMG 1 // 2 EMG 2                                                    
                                                                                                        
    err_emg_1 = g_adc_meas.emg[0] - c_mem.emg.emg_threshold[0];
    err_emg_2 = g_adc_meas.emg[1] - c_mem.emg.emg_threshold[1];
    
     // =========================== POSITION INPUT ==============================            
    switch(SH->input_mode) {
            
        case INPUT_MODE_EMG_PROPORTIONAL:
            if (err_emg_1 > 0)
                SH_ref = (err_emg_1 * g_mem.SH_config.pos_lim_sup) / (1024 - c_mem.emg.emg_threshold[0]);
            else
                SH_ref = 0;
            break;
        
        case INPUT_MODE_EMG_PROPORTIONAL_NC:
            if (err_emg_1 > 0)
                SH_ref = g_mem.SH_config.pos_lim_sup - (err_emg_1 * g_mem.SH_config.pos_lim_sup) / (1024 - c_mem.emg.emg_threshold[0]);
            else
                SH_ref = g_mem.SH_config.pos_lim_sup;
            break;

        case INPUT_MODE_EMG_INTEGRAL:
            SH_ref = SH_refOld;
            if (err_emg_1 > 0) {
                SH_ref = SH_refOld + (err_emg_1 * (int)g_mem.emg.emg_speed[0] * 2) / (1024 - c_mem.emg.emg_threshold[0]);
            }
            if (err_emg_2 > 0) {
                SH_ref = SH_refOld - (err_emg_2 * (int)g_mem.emg.emg_speed[1] * 2) / (1024 - c_mem.emg.emg_threshold[1]);
            }
            break;

        case INPUT_MODE_EMG_FCFS:
            SH_ref= SH_refOld;
            
                switch (current_emg) {
                    case 0:
                        // Look for the first EMG passing the threshold
                        if (err_emg_1 > 0 && err_emg_1 > err_emg_2) {
                            current_emg= 1;
                            break;
                        }
                        if (err_emg_2 > 0 && err_emg_2 > err_emg_1) {
                            current_emg = 2;
                            break;
                        }
                        break;

                    case 1:
                        // EMG 1 is first
                        if (err_emg_1 < 0) {
                            current_emg = 0;
                            break;
                        }
                       SH_ref= SH_refOld + (err_emg_1 * g_mem.emg.emg_speed[0] << 2) / (1024 - c_mem.emg.emg_threshold[0]);
                        break;

                    case 2:
                        // EMG 2 is first
                        if (err_emg_2 < 0) {
                            current_emg = 0;
                            break;
                        }
                        SH_ref = SH_refOld - (err_emg_2 * g_mem.emg.emg_speed[1] << 2) / (1024 - c_mem.emg.emg_threshold[1]);
                        break;

                    default:
                        break;
                }
            
            break;

        case INPUT_MODE_EMG_FCFS_ADV:
            SH_ref = SH_refOld;
            switch (current_emg) {
                // Look for the first EMG passing the threshold
                case 0:
                    if (err_emg_1 > 0 && err_emg_1 > err_emg_2) {
                        current_emg = 1;
                        break;
                    }
                    if (err_emg_2 > 0 && err_emg_2 > err_emg_1) {
                        current_emg = 2;
                        break;
                    }
                    break;

                // EMG 1 is first
                case 1:
                    // If both signals are under threshold go back to status 0
                    if ((err_emg_1 < 0) && (err_emg_2 < 0)) {
                        current_emg = 0;
                        break;
                    }
                    // but if the current signal come back over threshold, continue using it
                    if (err_emg_1 > 0) 
                        SH_ref = SH_refOld + (err_emg_1 * g_mem.emg.emg_speed[0] << 2) / (1024 - c_mem.emg.emg_threshold[0]);                    
                    break;

                // EMG 2 is first
                case 2:
                    // If both signals are under threshold go back to status 0
                    if ((err_emg_1 < 0) && (err_emg_2 < 0)) {
                        current_emg = 0;
                        break;
                    }
                    // but if the current signal come back over threshold, continue using it
                    if (err_emg_2 > 0) {
                        SH_ref = SH_refOld - (err_emg_2 * c_mem.emg.emg_speed[1] << 2) / (1024 - c_mem.emg.emg_threshold[1]);
                    }
                    break;

                default:
                    break;
            }
            break;

        default:
            break;
    }

    // Position limit saturation
    
        if (SH_ref < SH->pos_lim_inf) 
            SH_ref = SH->pos_lim_inf;
        if (SH_ref > SH->pos_lim_sup) 
            SH_ref = SH->pos_lim_sup;

}




//==============================================================================
//                                                  VIBROTACTILE CONTROL GENERIC
//==============================================================================
void vibrotactile_control_generic(uint8 idx) {
   
    int16 CYDATA pwm_input = 0;

    // Static Variables
   
    static CYBIT motor_dir[NUM_OF_VT_ACTUATORS]; 

    // ======================= UPDATE MOTOR REFERENCE ==========================            

    pwm_input = VT_ref[idx];

    if (pwm_input > 0) 
        motor_dir[idx] = TRUE;
    else 
        motor_dir[idx] = FALSE;
        
    if (pwm_input > PWM_MAX_VALUE_DC) 
        pwm_input = PWM_MAX_VALUE_DC;
    if (pwm_input < - PWM_MAX_VALUE_DC) 
        pwm_input = - PWM_MAX_VALUE_DC;
     
    // Set motor direction and write pwm value
    switch (idx) {
        case 0:         // Motor 1
            if (motor_dir[idx])
                VT1_DIR_Write(0x00);
            else
                VT1_DIR_Write(0x01);
         
               PWM_VT_WriteCompare1(abs(pwm_input));    
            
            break;
        case 1:         // Motor 2
            
            if (motor_dir[idx])
                VT2_DIR_Write(0x00);          
            else
                VT2_DIR_Write(0x01);
            
            PWM_VT_WriteCompare2(abs(pwm_input));    
        break;
    }
       
    
}

//==============================================================================
//                                                           ENCODER READING SPI
//==============================================================================

void encoder_reading_SPI(uint8 n_line, uint8 assoc_motor) {

}

//==============================================================================
//                                                           ANALOG MEASUREMENTS
//==============================================================================

void analog_read_end() {

    /* =========================================================================
    /   Ideal formulation to calculate tension and current
    /
    /   tension = ((read_value_mV - offset) * 101) / gain -> [mV]
    /   current = ((read_value_mV - offset) * 375) / (gain * resistor) -> [mA]
    /
    /   Definition:
    /   read_value_mV = counts_read / 0.819 -> conversion from counts to mV
    /   offset = 2000 -> hardware amplifier bias in mV
    /   gain = 8.086 -> amplifier gain
    /   resistor = 18 -> resistor of voltage divider in KOhm 
    /
    /   Real formulation: tradeoff in good performance and accurancy, ADC_buf[] 
    /   and offset unit of measurement is counts, instead dev_tension and
    /   g_meas.curr[] are converted in properly unit.
    /  =========================================================================
    */

    int32 CYDATA i_aux;
    
    static uint8 idx = 0;
    
    // Wait for conversion end
    
    while(!ADC_STATUS_Read()){
        
        if (interrupt_flag){
            interrupt_flag = FALSE;
            interrupt_manager();
        }
    }



        // Read pressure in any case
        g_adc_meas.pressure  = (int32)(ADC_buf[0]);    //0 - 4096  
        pressure_value = g_adc_meas.pressure;
        pressure_value =(((float)pressure_value/4096.0 + 0.00842)/0.002421) - atm_pressure;       // datasheet transfer function ticks->kPa sensor MPXH6400A
    
        if (pressure_value < 0) 
            pressure_value = 0;
            
        // Reset emg
        for (idx = 0; idx < NUM_OF_INPUT_EMGS; idx++){
            g_adc_meas.emg[idx] = 0;
        }
         
        // Read EMG channel 1
        i_aux = 0;  
        i_aux = (int32)(ADC_buf[1 + c_mem.emg.switch_emg]);
        if (i_aux < 0) 
            i_aux = 0;
        i_aux = filter(i_aux, &filt_emg[0]);
        i_aux = (i_aux << 10) / g_mem.emg.emg_max_value[0];

        if (interrupt_flag){
            interrupt_flag = FALSE;
            interrupt_manager();
        }
        
        //Saturation
        if (i_aux < 0) 
            i_aux = 0;
        else 
            if (i_aux > 1024)
                i_aux = 1024;
        
        g_adc_meas.emg[0] = i_aux;
        
        // Read EMG channel 2
        i_aux = 0;  
        i_aux = (int32)(ADC_buf[2 - c_mem.emg.switch_emg]);
        
        if (i_aux < 0)
            i_aux = 0;
        i_aux = filter(i_aux, &filt_emg[1]);
        i_aux = (i_aux << 10) / g_mem.emg.emg_max_value[1];

        if (interrupt_flag){
            interrupt_flag = FALSE;
            interrupt_manager();
        }
        
        if (i_aux < 0) 
            i_aux = 0;
        else 
            if (i_aux > 1024)
                i_aux = 1024;
       
        g_adc_meas.emg[1] = i_aux;
    
}

//==============================================================================
//                                                           OVERCURRENT CONTROL
//==============================================================================

void overcurrent_control() {
    
}

//==============================================================================
//                                                              PWM_LIMIT_SEARCH
//==============================================================================

void pwm_limit_search(uint8 mot_idx) {

}

//==============================================================================
//                                                         CYCLES COUNTER UPDATE
//==============================================================================

void cycles_counter_update() {
	
}

//==============================================================================
//                                                            SAVE CYCLES EEPROM
//==============================================================================

void save_cycles_eeprom() {

}
/* [] END OF FILE */