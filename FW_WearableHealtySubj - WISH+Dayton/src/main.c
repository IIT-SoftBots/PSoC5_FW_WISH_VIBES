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
* \file         main.c
*
* \brief        Firmware main file.
* \date         March 20th, 2020
* \author       _Centro "E.Piaggio"_
* \copyright    (C) 2020 Centro "E.Piaggio". All rights reserved.
* \mainpage     Firmware
* \brief        This is the firmware of PSoC5 logic board.
* \version      1.9.4
*
* \details      This is the firmware of PSoC5 logic board. Depending on the configuration, 
*               it can control up to two motors and read its encoders. Also can read and
*               convert analog measurements connected to the PSoC microcontroller.                
*
*/


// ----------------------------------------------------------------------------
// This version changes:
//      - not reported


//=================================================================     includes

#include "device.h"
#include "globals.h"
#include "interruptions.h"
#include "command_processing.h"
#include "utils.h"
#include "project.h"
#include "FS.h"

//==============================================================================
//                                                                 MAIN FUNCTION
//==============================================================================

int main()
{
    // Iterator    
    uint8 j;
    
    // Variable declarations for DMA     
    uint8 DMA_Chan;
    uint8 DMA_TD[1];
    
    //================================     initializations - psoc and components

    // EEPROM
    EEPROM_Start();
    memRecall();                                        // Recall configuration.  
    
    // FTDI chip enable
    CyDelay(100);
    FTDI_ENABLE_Write(0x01);
    
	// LED Enable   
    
    // RS485
    UART_RS485_Stop();
    UART_RS485_Start();
    UART_RS485_Init();
    UART_RS485_ClearRxBuffer();
    UART_RS485_ClearTxBuffer();
    ISR_RS485_RX_StartEx(ISR_RS485_RX_ExInterrupt);
    
    // CYCLES TIMER   
    CYCLES_TIMER_Start();
    ISR_CYCLES_StartEx(ISR_CYCLES_Handler);
    
    PWM_PUMP_Start();
    PWM_VT_Start();
    PWM_VT_WriteCompare1(50);
    PWM_VT_WriteCompare2(50);    
    VT1_DIR_Write(0);
    VT2_DIR_Write(0);
    
    //VALVE_Write(CLOSED);
    flag_master = 0;  //Master Mode disabled

    // ADC
    ADC_Start();
    ADC_SOC_Write(0x01);            // Force first read cycle.
    Battery_level_out = 0;
    // ADC DMA    
    DMA_Chan = DMA_DmaInitialize(DMA_BYTES_PER_BURST, DMA_REQUEST_PER_BURST, HI16(DMA_SRC_BASE), HI16(DMA_DST_BASE));
    DMA_TD[0] = CyDmaTdAllocate();                                                                          // Allocate TD.
    CyDmaTdSetConfiguration(DMA_TD[0], 2 * NUM_OF_ANALOG_INPUTS, DMA_TD[0], DMA__TD_TERMOUT_EN | TD_INC_DST_ADR); // DMA Configurations.
    CyDmaTdSetAddress(DMA_TD[0], LO16((uint32)ADC_DEC_SAMP_PTR), LO16((uint32)ADC_buf));                    // Set Register Address.
    CyDmaChSetInitialTd(DMA_Chan, DMA_TD[0]);                                                               // Initialize Channel.
    CyDmaChEnable(DMA_Chan, 1);                                                                             // Enable DMA.
    
    // TIMER
    MY_TIMER_Start();           
    PACER_TIMER_Start();    
    
    CYGlobalIntEnable;              // Enable interrupts.
    filt_emg[0].gain      = 50;   // Emg channels filter constant.
    filt_emg[1].gain      = 50;   // Emg channels filter constant.
    
    for (uint8 i = 0; i < 3; i++){
        change_ext_ref_flag[i] = FALSE;
    }
    //---------------------------------------------------  Initialize emg structure
    g_adc_meas.emg[0] = 0;
    g_adc_meas.emg[1] = 0;

    //------------------------------------------------- Initialize package on receive from RS485
    g_rx.length = 0;
    g_rx.ready  = 0;
    
    LED_CONTROL_Write(1);     // Green

    //============================================================     main loop
    
    // All peripherals has started, now it is ok to start communication
    RS485_CTS_Write(0);             // Clear To Send on RS485.
    int a=0;
    
    /*
    while(!Battery_level_out){
        Battery_level_out = Battery_flag_Read();
        if (interrupt_flag){
                // Reset flags
                interrupt_flag = FALSE;
                
                // Manage Interrupt on rs485
                interrupt_manager();
            }      
        a = 1;
    };
   
    if (a == 1){
        CyDelay(50);  // Pressure sensor has warm-up time of 20 ms
        while(!ADC_STATUS_Read()){}
        // Read pressure in any case
        g_adc_meas.pressure  = (int32)(ADC_buf[0]);    //0 - 4096  
        atm_pressure = (((g_adc_meas.pressure/4095.0 + 0.00842)/0.002421));       // P_atm in Pascal   }
        a = 0;
    } */
    
    atm_pressure = 102;       // P_atm in Pascal   }
    
    for(;;)
    {         
        // Put the FF reset pin to LOW
        RESET_FF_Write(0x00);
            // Call function scheduler
        function_scheduler(); 
     

        //  Wait until the FF is set to 1
        while(FF_STATUS_Read() == 0){
            // On interrupt from RS485
            if (interrupt_flag){
                // Reset flags
                interrupt_flag = FALSE;
                
                // Manage Interrupt on rs485
                interrupt_manager();
            }
        };

        // Command a FF reset
        RESET_FF_Write(0x01);

        // Wait for FF to be reset
        while(FF_STATUS_Read() == 1);

        if(UART_RS485_ReadRxStatus() & UART_RS485_RX_STS_SOFT_BUFF_OVER)
            UART_RS485_ClearRxBuffer();
    }
    return 0;
}

/* [] END OF FILE */