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
* \file         command_processing.c
*

* \brief        Command processing functions.
* \date         March 20th, 2020
* \author       _Centro "E.Piaggio"_
* \copyright    (C) 2012-2016 qbrobotics. All rights reserved.
* \copyright    (C) 2017-2020 Centro "E.Piaggio". All rights reserved.
*/
//=================================================================     includes
#include "command_processing.h"

//================================================================     variables

reg8 * EEPROM_ADDR = (reg8 *) CYDEV_EE_BASE;

//==============================================================================
//                                                            RX DATA PROCESSING
//==============================================================================
//  This function checks for the availability of a data packet and process it:
//      - Verify checksum;
//      - Process commands;
//==============================================================================

void commProcess(void){

    uint8 CYDATA rx_cmd;
    rx_cmd = g_rx.buffer[0];

//==========================================================     verify checksum

    if (!(LCRChecksum(g_rx.buffer, g_rx.length - 1) == g_rx.buffer[g_rx.length - 1])){
        // Wrong checksum
        g_rx.ready = 0;
        return;
    }

    switch(rx_cmd) {

//=============================================================     CMD_ACTIVATE
        case CMD_ACTIVATE:
            cmd_activate();
            break;

//===========================================================     CMD_SET_INPUTS

        case CMD_SET_INPUTS:
            cmd_set_inputs();
            break;

//=====================================================     CMD_GET_MEASUREMENTS

        case CMD_GET_MEASUREMENTS:
            cmd_get_measurements();
            break;

//=====================================================     CMD_GET_CURR_AND_MEAS

        case CMD_GET_CURR_AND_MEAS:
            cmd_get_curr_and_meas();
            break;
            
//=========================================================     CMD_GET_CURRENTS

        case CMD_GET_CURRENTS:
            cmd_get_currents();
            break;

//=========================================================     CMD_GET_CURR_DIFF
         
        case CMD_GET_CURR_DIFF:
            cmd_get_currents_for_cuff();
            break;

//=========================================================     CMD_GET_VIBROTACTILE_INPUTS
         
        case CMD_GET_VIBROTACTILE_INPUTS:
            cmd_get_vibrotactile_inputs();
            break;            
            
//=========================================================     CMD_GET_CURR_DIFF
        
        case CMD_GET_VELOCITIES:
            cmd_get_velocities();
            break;
            
//=========================================================     CMD_GET_CURR_DIFF

        case CMD_GET_ACCEL:
            cmd_get_accelerations();
            break;

//=========================================================     CMD_GET_JOYSTICK

        case CMD_GET_JOYSTICK:
            cmd_get_joystick();
        break;
            
//=========================================================     CMD_GET_EMG

        case CMD_GET_EMG:
            cmd_get_emg();
            break;
            
//=========================================================     CMD_GET_ACTIVATE
            
        case CMD_GET_ACTIVATE:
            cmd_get_activate();
            break;
            
//=========================================================     CMD_SET_BAUDRATE
            
        case CMD_SET_BAUDRATE:
            cmd_set_baudrate();
            break;  
            
//============================================================     CMD_GET_INPUT

        case CMD_GET_INPUTS:
            cmd_get_inputs();
            break;

//=============================================================     CMD_GET_INFO

        case CMD_GET_INFO:
            infoGet(  __REV16(*((uint16 *) &g_rx.buffer[1])) );
            break;

//============================================================     CMD_SET_PARAM

        case CMD_SET_ZEROS:
            setZeros();
            break;

//============================================================     CMD_GET_PARAM

        case CMD_GET_PARAM_LIST:
            manage_param_list( __REV16(*((uint16 *) &g_rx.buffer[1])),TRUE );
            break;

//=================================================================     CMD_PING
            
        case CMD_PING:
            cmd_ping();
            break;

//=========================================================     CMD_STORE_PARAMS
            
        case CMD_STORE_PARAMS:
            cmd_store_params();
            break;

//=================================================     CMD_STORE_DEFAULT_PARAMS

        case CMD_STORE_DEFAULT_PARAMS:
            if(memStore(DEFAULT_EEPROM_DISPLACEMENT))
                sendAcknowledgment(ACK_OK);
            else
                sendAcknowledgment(ACK_ERROR);
            break;

//=======================================================     CMD_RESTORE_PARAMS

        case CMD_RESTORE_PARAMS:
            if(memRestore())
                sendAcknowledgment(ACK_OK);
            else
                sendAcknowledgment(ACK_ERROR);
            break;

//=============================================================     CMD_INIT_MEM

        case CMD_INIT_MEM:            
            if(memInit())
                sendAcknowledgment(ACK_OK);
            else
                sendAcknowledgment(ACK_ERROR);
            break;

//===========================================================     CMD_BOOTLOADER

        case CMD_BOOTLOADER:
            //Not sure if ACK_OK is correct, should check
            sendAcknowledgment(ACK_OK);
            CyDelay(1000);
            FTDI_ENABLE_Write(0x00);
            CyDelay(1000);
            Bootloadable_Load();
            break;

//============================================================     CMD_HAND_CALIBRATE

        case CMD_HAND_CALIBRATE:           
            break;
            
//=====================================================     CMD_GET_IMU_READINGS

        case CMD_GET_IMU_READINGS:
            cmd_get_imu_readings();
            break; 
            
//=====================================================     CMD_GET_IMU_PARAM

        case CMD_GET_IMU_PARAM:
            get_IMU_param_list( __REV16(*((uint16 *) &g_rx.buffer[1])) );
            break;             
            
//=====================================================     CMD_GET_ENCODER_CONF

        case CMD_GET_ENCODER_CONF:
            cmd_get_encoder_map();
            break; 

//=====================================================     CMD_GET_ENCODER_RAW

        case CMD_GET_ENCODER_RAW:
            cmd_get_encoder_raw();
            break; 

//=====================================================     CMD_GET_ADC_CONF

        case CMD_GET_ADC_CONF:
            cmd_get_ADC_map();
            break; 
            
//=====================================================     CMD_GET_ADC_RAW

        case CMD_GET_ADC_RAW:
            cmd_get_ADC_raw();
            break; 
            
//=====================================================     CMD_GET_SD_SINGLE_FILE

        case CMD_GET_SD_SINGLE_FILE:
            cmd_get_SD_file( __REV16(*((uint16 *) &g_rx.buffer[1])) );
            break;   
            
//=====================================================     CMD_REMOVE_SD_SINGLE_FILE

        case CMD_REMOVE_SD_SINGLE_FILE:
            cmd_remove_SD_file( __REV16(*((uint16 *) &g_rx.buffer[1])) );
            break;               
            
//=========================================================== ALL OTHER COMMANDS
        default:
            break;

    }
}  

//==============================================================================
//                                                                     INFO SEND
//==============================================================================

void infoSend(void){
    char packet_string[1500];
    
    prepare_generic_info(packet_string);
    UART_RS485_PutString(packet_string);
}
//==============================================================================
//                                                                  NUM_OF_BYTES
//==============================================================================
                    
uint8 num_of_bytes (uint8 TYPE){
    uint8 sod;
    switch (TYPE) {
            case TYPE_FLAG: case TYPE_INT8: case TYPE_UINT8: case TYPE_STRING:
                sod = 1; break;
            case TYPE_INT16: case TYPE_UINT16:
                sod = 2; break;
            case TYPE_INT32: case TYPE_UINT32: case TYPE_FLOAT:
                sod = 4; break;
    }  
    return sod;
}

//==============================================================================
//                                                              COMMAND GET INFO
//==============================================================================

void infoGet(uint16 info_type) {
    char CYDATA packet_string[4000] = "";
    char CYDATA str_sd_data[20000] = "";
    //==================================     choose info type and prepare string

    switch (info_type) {
        case INFO_ALL:
            prepare_generic_info(packet_string);
            UART_RS485_ClearTxBuffer(); 
            UART_RS485_PutString(packet_string);
            break;
        case CYCLES_INFO:
            prepare_counter_info(packet_string);
            UART_RS485_ClearTxBuffer();
            UART_RS485_PutString(packet_string);
            break;
        case GET_SD_PARAM:
            Read_SD_Closed_File(sdParam, packet_string, sizeof(packet_string));
            UART_RS485_ClearTxBuffer();
            UART_RS485_PutString(packet_string);
            break;
        case GET_SD_DATA:
            Read_SD_Current_Data(str_sd_data, sizeof(str_sd_data));
            UART_RS485_ClearTxBuffer();
            UART_RS485_PutString(str_sd_data);
            break;
        case GET_SD_FS_TREE:
            Get_SD_FS(str_sd_data);
            UART_RS485_ClearTxBuffer();
            UART_RS485_PutString(str_sd_data);
            break;
        case GET_SD_EMG_HIST:
            // Send every single byte inside the function, since it could be a large file to send
            Read_SD_EMG_History_Data();
            break;
        case GET_SD_R01_SUMM:
            Read_SD_Closed_File(sdR01File, packet_string, sizeof(packet_string));
            UART_RS485_ClearTxBuffer();
            UART_RS485_PutString(packet_string);
            break;            
        default:
            break;
    }
}


//==============================================================================
//                                                                GET PARAM LIST
//==============================================================================

void get_param_list ( uint8 num_params, uint8 num_menus, const struct parameter PARAM_LIST[], const struct menu MENU_LIST[], uint8  sendToDevice){
    
    uint8 CYDATA idx = 0;      
    uint8* m_addr = (uint8*)PARAM_LIST[0].VAR_P;
    uint8 CYDATA string_length;
    char CYDATA aux_str[250] = "";
    char CYDATA aux_str1[250] = ""; 
    
    int32 aux_int32;
    uint8 i, j;
    uint8 count;
    char aux_char[50];
    
    uint16 packet_length = PARAM_BYTE_SLOT*num_params + PARAM_MENU_SLOT*num_menus + PARAM_BYTE_SLOT;
    uint8 packet_data[packet_length];
    for (int ii = 0; ii < packet_length; ii++) packet_data[ii] = 0;

    packet_data[0] = CMD_GET_PARAM_LIST;
    packet_data[1] = num_params;
    
    for (idx = 0; idx < num_params; idx ++) {
        m_addr = (uint8*)PARAM_LIST[idx].VAR_P;
        uint8 sod = num_of_bytes(PARAM_LIST[idx].TYPES);
        packet_data[2 + PARAM_BYTE_SLOT*idx] = PARAM_LIST[idx].TYPES;
        packet_data[3 + PARAM_BYTE_SLOT*idx] = PARAM_LIST[idx].NUM_ITEMS;        


    switch(PARAM_LIST[idx].custom){

        case CUSTOM_POS_LIM:        //Position limits
            aux_int32 = (c_mem.SH_config.pos_lim_inf >> c_mem.SH_config.res);
            for(j = 0; j < sod; j++) {
                packet_data[(4 + PARAM_BYTE_SLOT*idx) + sod - j -1] = ((char*)(&aux_int32))[j];
            }
            aux_int32 = (c_mem.SH_config.pos_lim_sup >> c_mem.SH_config.res);
            for(j = 0; j < sod; j++) {
                packet_data[(4 + PARAM_BYTE_SLOT*idx + sod) + sod - j -1] = ((char*)(&aux_int32))[j];
            }
            break;            
            

        case 0:  // Not custom parameter
        default: // Parameters that are only custom for SET
            for (i = 0; i < PARAM_LIST[idx].NUM_ITEMS * sod; i+=sod){
                for(j = 0; j < sod; j++) {
                    packet_data[(4 + PARAM_BYTE_SLOT*idx + i) + sod - j -1] = m_addr[i+j];
                }
            }
            break;
    }
       
        sprintf(aux_str,"");
        itoa(idx + 1, aux_char, 10);
        strcat(aux_str ,aux_char);
        strcat(aux_str," - ");
        strcat(aux_str,(char*)PARAM_LIST[idx].PARAM_STR);                
        string_length = strlen(aux_str);
        
        // Parameters with a menu
        if (PARAM_LIST[idx].MENU != 0){
            for (i = 0; i < num_menus ; i++){
                if (MENU_LIST[i].name == PARAM_LIST[idx].MENU){
                strcat(aux_str, MENU_LIST[i].choice[*m_addr]);
                }              
            //Recomputes string length
            string_length = strlen(aux_str)+1;
            }
        }

        // Add parameter string to packet
        for(i = string_length; i != 0; i--)
            packet_data[(4 + PARAM_BYTE_SLOT*idx) + (sod*PARAM_LIST[idx].NUM_ITEMS) + string_length - i] = aux_str[string_length - i];
        
        
        if (PARAM_LIST[idx].TYPES == TYPE_FLAG){
            //Send the number of menus          
            for (i = 0; i < num_menus ; i++){
                if (MENU_LIST[i].name == PARAM_LIST[idx].MENU){
                packet_data[(4 + PARAM_BYTE_SLOT*idx) + (sod*PARAM_LIST[idx].NUM_ITEMS) + string_length] = i + 1;
                i = num_menus;}              
            }
            // Add empty bit + struct number
            // Note: added here at the end of packets is transparent to old parameters retrieving version
            packet_data[(4 + PARAM_BYTE_SLOT*idx) + (sod*PARAM_LIST[idx].NUM_ITEMS) + string_length + 2] = PARAM_LIST[idx].NUM_STR;
        }
        else {
            packet_data[(4 + PARAM_BYTE_SLOT*idx) + (sod*PARAM_LIST[idx].NUM_ITEMS) + string_length + 1] = PARAM_LIST[idx].NUM_STR;
        }
    }
    
    // Add menu
    for (j = 0; j < num_menus; j++) {
        sprintf(aux_str1,"");
        for (count = 0; count <10 ; count++){            
            if (!strcmp(MENU_LIST[j].choice[count],"")){
                if (MENU_LIST[j].reset == TRUE){
                    strcat(aux_str1,"The board will reset\n");
                }
                count = 10;
            }            
            else {
                itoa(count, aux_char, 10);
                strcat(aux_str1,aux_char);
                strcat(aux_str1," -> ");
                strcat(aux_str1,(char*)MENU_LIST[j].choice[count]);
                strcat(aux_str1,"\n");
            }    
        }
        string_length = strlen(aux_str1);
        
        for(i = string_length; i != 0; i--)
        packet_data[PARAM_BYTE_SLOT*num_params + 2 + j*PARAM_MENU_SLOT + string_length - i] = aux_str1[string_length - i];           
    }
        
    packet_data[packet_length - 1] = LCRChecksum(packet_data,packet_length - 1);
    
    if (sendToDevice)
    {commWrite(packet_data, packet_length);  
    }
    else {
       //Update pointer (Bad choice since pointing to dead variable in another function, to fix)
      // longPkgP = (char*)&packet_data[0];
      // longPkgSize = packet_length;
    }
}

//==============================================================================
// MANAGE PARAM LIST
//==============================================================================
void manage_param_list(uint16 index, uint8 sendToDevice) {
    uint8 CYDATA i, j;
    
    uint8 PARAM_IDX;
         
    // Arrays
    struct st_eeprom* MEM_P = &c_mem;   // c_mem is used for param reading
    
    if (index){                         // Switch from c_mem to g_mem
        MEM_P = &g_mem;                 // g_mem is used for param setting
    }

    struct menu menu_type;
    
    //------------------ BEGIN OF MENU LIST --------------------//  
        const struct menu MENU_LIST[] = {
    //  {num            , RESET     , { choice_0                  , choice_1                , choice_2                ,  choice_3                 , choice_4          , choice_5                  , choice_6              ,choice_7                  ,choice_8                  , choice_9                   }},
        {MENU_INPUT     , FALSE     , { " Usb"                    , " Handle"               , " EMG proportional"     , " EMG Integral"           , " EMG FCFS"       , " EMG FCFS Advanced"      , " Joystick"           , " EMG proportional NC"    , ""                       , ""                         }},  
        {MENU_Y_N       , FALSE     , { " NO"                     , " YES"                  , ""                      , ""                        , ""                , ""                        , ""                    , ""                       , ""                       , ""                         }},                              
        {MENU_ON_OFF    , TRUE      , { " OFF"                    , " ON"                   , ""                      , ""                        , ""                , ""                        , ""                    , ""                       , ""                       , ""                         }},                                                                                 
       };
    //------------------ END  OF MENU LIST --------------------//  
        
    uint8 NUM_MENUs = sizeof(MENU_LIST)/sizeof(menu_type);  
    
    struct parameter param_type;   
    
    const struct parameter PARAM_LIST[] = {
    //  {VAR_P                                                     , TYPES           , NUM_ITEMS , PARAM_STR                               , MENU,         , STRUCTURE         , CUSTOM            , SHOW WITH PING}
        //DEVICE_PARAMETERS    
        {(uint8* const) &(MEM_P->dev.id)                           , TYPE_UINT8      , 1         , "Device ID:"                            , 0             , ST_DEVICE         , 0                 , TRUE},  
        
        //EMG_PARAMETERS    
        {(uint8* const) &(MEM_P->emg.emg_threshold[0])             , TYPE_UINT16     , 2         , "EMG thresholds:"                       , 0             , ST_EMG            , 0                 , TRUE},
        {(uint8* const) &(MEM_P->emg.emg_max_value[0])             , TYPE_UINT32     , 2         , "EMG max values:"                       , 0             , ST_EMG            , 0                 , TRUE}, 
        {(uint8* const) &(MEM_P->emg.emg_speed[0])                 , TYPE_UINT8      , 2         , "EMG max speeds:"                       , 0             , ST_EMG            , 0                 , TRUE}, 
        {(uint8* const) &(MEM_P->emg.switch_emg)                   , TYPE_FLAG       , 1         , "EMG inversion:"                        , MENU_Y_N      , ST_EMG            , 0                 , TRUE}, 
        
        //MASTER MODE PARAMETERS
        {(uint8* const) &(MEM_P->MS.master_mode_active)            , TYPE_FLAG       , 1         , "Master Mode:"                          , MENU_ON_OFF   , ST_MS_SPEC        , 0                 , TRUE},  
        {(uint8* const) &(MEM_P->MS.slave_ID)                      , TYPE_UINT8      , 1         , "Slave ID:"                             , 0             , ST_MS_SPEC        , 0                 , TRUE},  
        {(uint8* const) &(MEM_P->SH_config.res)                    , TYPE_UINT8      , 1         , "Slave resolution:"                     , 0             , ST_MS_SPEC        , 0                 , TRUE},  
        {(uint8* const) &(MEM_P->SH_config.input_mode)             , TYPE_FLAG       , 1         , "Input mode:"                           , MENU_INPUT    , ST_MS_SPEC        , CUSTOM_INPUT      , TRUE}, 
        {(uint8* const) &(MEM_P->SH_config.pos_lim_inf)            , TYPE_INT32      , 2         , "Pos. limits [inf, sup]:"               , 0             , ST_MS_SPEC        , CUSTOM_POS_LIM    , TRUE},       
        {(uint8* const) &(MEM_P->FB.vibrotactile_feedback_active)  , TYPE_FLAG       , 1         , "Vibrotactile Feedback:"                , MENU_ON_OFF   , ST_MS_SPEC        , 0                 , TRUE}, 
        {(uint8* const) &(MEM_P->FB.airchamber_feedback_active)    , TYPE_FLAG       , 1         , "Air Chamber Feedback:"                 , MENU_ON_OFF   , ST_MS_SPEC        , 0                 , TRUE}, 
        {(uint8* const) &(MEM_P->FB.max_residual_current)          , TYPE_INT32      , 1         , "Maximum slave residual current:"       , 0             , ST_MS_SPEC        , 0                 , TRUE},              
        {(uint8* const) &(MEM_P->FB.maximum_pressure_kPa)          , TYPE_FLOAT      , 1         , "Maximum pressure feedback (kPa):"      , 0             , ST_MS_SPEC        , 0                 , TRUE}, 
        {(uint8* const) &(MEM_P->FB.prop_err_fb_gain)              , TYPE_FLOAT      , 1         , "Proportional pressure error gain:"     , 0             , ST_MS_SPEC        , 0                 , TRUE}
    };
    uint8 NUM_PARAMs = sizeof(PARAM_LIST)/sizeof(param_type);  
    

    if (!index) {
        // Get parameters list with relative types
        get_param_list(NUM_PARAMs, NUM_MENUs, PARAM_LIST, MENU_LIST, sendToDevice);
    }   
    else if  (index == 300) {
        // Called only by prepre_generic_info to get data  from the parameters to print
        qbadminp_string(NUM_PARAMs, NUM_MENUs, PARAM_LIST, MENU_LIST);
    }

    else {
         // Set specific parameter        
        PARAM_IDX = index -1;       // Get right vector param index
        
        // Find size of data
        uint8 sod = num_of_bytes(PARAM_LIST[PARAM_IDX].TYPES);
   
        if (PARAM_LIST[PARAM_IDX].custom == 0) {
            // Use default specifications for param setting
            for (i = 0; i < PARAM_LIST[PARAM_IDX].NUM_ITEMS * sod; i += sod){
                for(j = 0; j < sod; j++) {
                    ((char*)(PARAM_LIST[PARAM_IDX].VAR_P + i))[sod - j -1] = g_rx.buffer[3+i+j];                   
                }
            } 
            if( PARAM_LIST[PARAM_IDX].TYPES == TYPE_STRING)                   
               *(PARAM_LIST[PARAM_IDX].VAR_P + i) = '\0';        
        }
        
        else {  
            // Use custom specifications for param setting
            set_custom_param(PARAM_IDX, PARAM_LIST);
        }
        
       
        // Perform chip reset if needed
        for (i=0; i< NUM_MENUs;i++){
            if ((MENU_LIST[i].name == PARAM_LIST[PARAM_IDX].MENU) & (MENU_LIST[i].reset == TRUE)){
             reset_PSoC_flag = TRUE;
            }   
        }
    }
} 


//==============================================================================
//                                                              SET CUSTOM PARAM
//==============================================================================

void set_custom_param(uint16 index, const struct parameter PARAM_LIST[]) {
    uint8 sod =   num_of_bytes(PARAM_LIST[index].TYPES);

    uint8 CYDATA i, j;
        
    switch(PARAM_LIST[index].custom){
        
            
        case CUSTOM_INPUT:         //Input mode
            g_mem.SH_config.input_mode = g_rx.buffer[3];            //In this specific FW, input mode is not a custom parameter. Since SH is always USB-controlled, there is no need to set SHrefNew = SH_encoder_value
            break;   

        
        case CUSTOM_POS_LIM:        //Position limits
            g_mem.SH_config.pos_lim_inf = (int32)(g_rx.buffer[3]<<24 | g_rx.buffer[4]<<16 | g_rx.buffer[5]<<8 | g_rx.buffer[6]);
            g_mem.SH_config.pos_lim_sup = (int32)(g_rx.buffer[7]<<24 | g_rx.buffer[8]<<16 | g_rx.buffer[9]<<8 | g_rx.buffer[10]);

            g_mem.SH_config.pos_lim_inf = g_mem.SH_config.pos_lim_inf << g_mem.SH_config.res;
            g_mem.SH_config.pos_lim_sup = g_mem.SH_config.pos_lim_sup << g_mem.SH_config.res;
            break;            
            default:

                for (i = 0; i < PARAM_LIST[index].NUM_ITEMS * sod; i += sod){
                    for(j = 0; j < sod; j++) {
                        ((char*)(PARAM_LIST[index].VAR_P + i))[sod - j -1] = g_rx.buffer[3+i+j];                   
                    }
                } 
                if( PARAM_LIST[index].TYPES == TYPE_STRING)                   
                   *(PARAM_LIST[index].VAR_P + i) = '\0';   
            break;
    }

      
}

//==============================================================================
//                                                        GET IMU PARAMETER LIST
//==============================================================================

void get_IMU_param_list(uint16 index)
{
}

//==============================================================================
//                                                            COMMAND SET ZEROS
//==============================================================================

void setZeros()
{
}

void  qbadminp_string ( uint8 num_params, uint8 num_menus, const struct parameter PARAM_LIST[], const struct menu MENU_LIST[]){
    strcpy(superstring, "");
    char info_string[2500] = "";
    int i;
    int idx;
    int32 aux_int32;
    uint32 aux_uint32;
    float aux_float;
    uint8 aux_uint8;
    int8 aux_int8;
    int16 aux_int16;
    uint16 aux_uint16;
    struct st_eeprom* MEM_P = &c_mem; 
    
    if(c_mem.dev.id != 250){                //To avoid dummy board ping
        uint8* m_addr;
        uint8* m_tmp;
        char str[100];
        strcpy(info_string, "");
        strcat(info_string, "\n");
        
        
        for (idx = 0; idx < num_params; idx ++) {
            if (PARAM_LIST[idx].ping){
                strcat(info_string, PARAM_LIST[idx].PARAM_STR );
                m_addr = (uint8*)PARAM_LIST[idx].VAR_P;
                uint8 sod = num_of_bytes(PARAM_LIST[idx].TYPES);
                switch(PARAM_LIST[idx].custom){
                case 0:   default:    
                    for (i = 0; i < PARAM_LIST[idx].NUM_ITEMS; i++){
                        m_tmp = m_addr + i*sod;
                        switch (PARAM_LIST[idx].TYPES){
                            case TYPE_UINT8:
                                aux_uint8 = *((uint8*)m_tmp);
                                sprintf(str, " %d", aux_uint8);
                                break;
                            case TYPE_INT8:
                                aux_int8 = *((int8*)m_tmp);
                                sprintf(str, " %d", aux_int8);
                                break;
                            case TYPE_INT16:   
                                aux_int16 = *((int16*)m_tmp);
                                sprintf(str, " %d", aux_int16);
                                break;
                            
                            case TYPE_UINT16: 
                                aux_uint16 = *((uint16*)m_tmp);
                                sprintf(str, " %d", aux_uint16);
                                break;
                            
                            case TYPE_UINT32:
                                aux_uint32 = *((uint32*)m_tmp);
                                sprintf(str, " %ld", aux_uint32);
                                break;
                                
                            case TYPE_INT32:
                                aux_int32 = *((int32*)m_tmp);
                                sprintf(str, " %ld", aux_int32);
                                break;
                                
                            case TYPE_FLOAT:
                                aux_float = *((float*)m_tmp);
                                sprintf(str, " %f", aux_float);
                                break;
                                
                            case TYPE_FLAG:
                                for (i = 0; i < num_menus; i++){
                                    if (MENU_LIST[i].name == PARAM_LIST[idx].MENU){
                                        strcpy(str, "");
                                        strcat(str, MENU_LIST[i].choice[*m_addr]);
                                        break;
                                    }
                                }
                                break;
                        } 
                        strcat(info_string, str);
                    }
                    break;
                    
                    
                case CUSTOM_POS_LIM:        
                    aux_int32 = (c_mem.SH_config.pos_lim_inf >> c_mem.SH_config.res);
                    sprintf(str, " %ld", aux_int32);
                    strcat(info_string, str);
                    aux_int32 = (c_mem.SH_config.pos_lim_sup >> c_mem.SH_config.res);
                    sprintf(str, " %ld", aux_int32);
                    strcat(info_string, str);
                    break;
                }
                
                strcat(info_string, "\n");
                
            }
            
        }
              
      
    strcat(superstring,info_string);
    
}}
//==============================================================================
//                                                   PREPARE GENERIC DEVICE INFO
//==============================================================================

void prepare_generic_info(char *info_string){   
    
     manage_param_list(300,0);
    int i;
    struct st_eeprom* MEM_P = &c_mem; 
    
    if(c_mem.dev.id != 250){                //To avoid dummy board ping
        
        char str[100];
        strcpy(info_string, "");
        strcat(info_string, "\r\n");
        strcat(info_string, "Firmware version: ");
        strcat(info_string, VERSION);
        strcat(info_string, ".\r\n\r\n");      
        strcat(info_string, "DEVICE INFO\r\n");
        strcat(info_string, "Device: PULSE\r\n");
        strcat(info_string, superstring);
        strcat(info_string, "\r\n");

            for (i = 0; i < NUM_OF_INPUT_EMGS; ++i) {
                sprintf(str,"EMG input %d -> %d", (int)(i + 1), (int) g_adc_meas.emg[i]);
                strcat(info_string, str);
                strcat(info_string,"\r\n");
            }
            
            
        sprintf(str,"Actuators input: Pump = %d, VT0 = %d, VT1 = %d \r\n",(int) Pump_refOld, (int)VT_refOld[0], (int) VT_refOld[1]);
        strcat(info_string, str);
        //sprintf(str, "Last FW cycle time: %d us\r\n", (uint16_t)cycle_time);
        sprintf(str, "Last FW cycle time: %u us\r\n", (uint16)cycle_time);
        strcat(info_string, str);

               
        strcat(info_string, "\r\n\0");      // End of info_string
    }
}

//==============================================================================
//                                                 PREPARE GENERIC COUNTERS INFO
//==============================================================================

void prepare_counter_info(char *info_string)
{
}

//==============================================================================
//                                                 PREPARE GENERIC COUNTERS INFO
//==============================================================================

void prepare_R01_info(char *info_string)
{
}

//==============================================================================
//                                                    PREPARE SD CARD PARAM INFO
//==============================================================================

void prepare_SD_param_info(char *info_string)
{
}


//==============================================================================
//                                                        PREPARE SD CARD LEGEND
//==============================================================================
void prepare_SD_legend(char *info_string)
{
}

//==============================================================================
//                                            PREPARE SD CARD EMG HISTORY LEGEND
//==============================================================================
void prepare_SD_EMG_History_legend(char *info_string)
{
    
}

//==============================================================================
//                                                   PREPARE SD CARD EMG HISTORY
//==============================================================================
void prepare_SD_EMG_history(char *info_string)
{
        
}

//==============================================================================
//                                                              IMU READING INFO
//==============================================================================

void IMU_reading_info(char *info_string)
{
}

//==============================================================================
//                                                     WRITE FUNCTIONS FOR RS485
//==============================================================================

void commWrite_old_id(uint8 *packet_data, uint16 packet_length, uint8 old_id)
{
    uint16 CYDATA index;    // iterator

    // frame - start
    UART_RS485_PutChar(':');
    UART_RS485_PutChar(':');
    // frame - ID
    //if(old_id)
        UART_RS485_PutChar(old_id);
    //else
        //UART_RS485_PutChar(g_mem.id);
        
    // frame - length
    UART_RS485_PutChar((uint8)packet_length);
    // frame - packet data
    for(index = 0; index < packet_length; ++index) {
        UART_RS485_PutChar(packet_data[index]);
    }

    index = 0;

    while(!(UART_RS485_ReadTxStatus() & UART_RS485_TX_STS_COMPLETE) && index++ <= 1000){}

    RS485_CTS_Write(1);
    RS485_CTS_Write(0);
}

void commWrite(uint8 *packet_data, uint16 packet_length)
{
    uint16 CYDATA index;    // iterator

    // frame - start
    UART_RS485_PutChar(':');
    UART_RS485_PutChar(':');
    // frame - ID
    UART_RS485_PutChar(g_mem.dev.id);
    // frame - length
    UART_RS485_PutChar((uint8)packet_length);
    // frame - packet data
    for(index = 0; index < packet_length; ++index) {
        UART_RS485_PutChar(packet_data[index]);
    }

    index = 0;

    while(!(UART_RS485_ReadTxStatus() & UART_RS485_TX_STS_COMPLETE) && index++ <= 1000){}

    RS485_CTS_Write(1);
    RS485_CTS_Write(0);
}


//==============================================================================
//                                             WRITE FUNCTION FOR ANOTHER DEVICE
//==============================================================================

void commWriteID(uint8 *packet_data, uint16 packet_length, uint8 id)
{
    static uint16 CYDATA i;    // iterator

    // frame - start
    UART_RS485_PutChar(':');
    UART_RS485_PutChar(':');
    // frame - ID
    UART_RS485_PutChar(id);
    // frame - length
    UART_RS485_PutChar((uint8)packet_length);
    // frame - packet data
    for(i = 0; i < packet_length; ++i) {
        UART_RS485_PutChar(packet_data[i]);
    }

    i = 0;

    while(!(UART_RS485_ReadTxStatus() & UART_RS485_TX_STS_COMPLETE) && i++ <= 1000){}
    
    RS485_CTS_Write(1);
    RS485_CTS_Write(0);
}

//==============================================================================
//                                                             CHECKSUM FUNCTION
//==============================================================================

// Performs a XOR byte by byte on the entire vector

uint8 LCRChecksum(uint8 *data_array, uint8 data_length) {
    
    uint8 CYDATA i;
    uint8 CYDATA checksum = 0x00;
    
    for(i = 0; i < data_length; ++i)
       checksum ^= data_array[i];
  
    return checksum;
}


//==============================================================================
//                                                       ACKNOWLEDGMENT FUNCTION
//==============================================================================

void sendAcknowledgment(uint8 value) {
    int packet_length = 2;
    uint8 packet_data[2];

    packet_data[0] = value;
    packet_data[1] = value;

    commWrite(packet_data, packet_length);
}

//==============================================================================
//                                                                  STORE MEMORY
//==============================================================================


uint8 memStore(int displacement)
{
    int i;  // iterator
    uint8 writeStatus;
    int pages;
    uint8 ret_val = 1;

    // Disable Interrupt
    ISR_RS485_RX_Disable();

    // Stop motor
    //PWM_MOTORS_WriteCompare1(0);

    // Update temperature information for better writing performance
    EEPROM_UpdateTemperature();

    memcpy( &c_mem, &g_mem, sizeof(g_mem) );

    pages = sizeof(g_mem) / 16 + (sizeof(g_mem) % 16 > 0);

    for(i = 0; i < pages; ++i) {
        writeStatus = EEPROM_Write((uint8*)&g_mem.flag + 16 * i, i + displacement);
        if(writeStatus != CYRET_SUCCESS) {
            ret_val = 0;
            break;
        }
    }

    memcpy( &g_mem, &c_mem, sizeof(g_mem) );

    // Re-Enable Interrupt
    ISR_RS485_RX_Enable();

    return ret_val;
}


//==============================================================================
//                                                                 RECALL MEMORY
//==============================================================================


void memRecall(void)
{  
    uint16 i;

    for (i = 0; i < sizeof(g_mem); i++) {
        ((reg8 *) &g_mem.flag)[i] = EEPROM_ADDR[i];
    }
       //check for initialization
    if (g_mem.flag == FALSE) {
        memRestore();
    } else {
        memcpy( &c_mem, &g_mem, sizeof(g_mem) );
    }   
}


//==============================================================================
//                                                                RESTORE MEMORY
//==============================================================================


uint8 memRestore(void) {
    uint16 i;

    for (i = 0; i < sizeof(g_mem); i++) {
        ((reg8 *) (uint8*)&g_mem.flag)[i] = EEPROM_ADDR[i + (DEFAULT_EEPROM_DISPLACEMENT * 16)];
    }

    //check for initialization
    if (g_mem.flag == FALSE) {
        return memInit();
    } else {
        return memStore(0);
    }  
}

//==============================================================================
//                                                                   MEMORY INIT
//==============================================================================

uint8 memInit(void)
{
    // set the initialized flag to show EEPROM has been populated
    g_mem.flag = TRUE;
    
    // DEV STRUCT
    g_mem.dev.id = 2;
    
    // SH STRUCT
    g_mem.SH_config.pos_lim_inf = 0;
    g_mem.SH_config.pos_lim_sup = (int32)16000 << g_mem.SH_config.res;
    g_mem.SH_config.input_mode = INPUT_MODE_EMG_FCFS;
    g_mem.SH_config.res = 3;

    // EMG STRUCT     
    g_mem.emg.emg_threshold[0] = 200;
    g_mem.emg.emg_threshold[1] = 200;
    g_mem.emg.emg_max_value[0] = 1024;
    g_mem.emg.emg_max_value[1] = 1024;   
    g_mem.emg.emg_speed[0] = 100; 
    g_mem.emg.emg_speed[1] = 100; 
    g_mem.emg.switch_emg = 0;    
    
    // MASTER_SLAVE STRUCT
    g_mem.MS.master_mode_active = FALSE;
    
    
    //FEEDBACK STRUCT
    g_mem.FB.max_residual_current = 450;
    g_mem.FB.maximum_pressure_kPa = 25.0;
    g_mem.FB.prop_err_fb_gain = 1.0;
    g_mem.FB.vibrotactile_feedback_active = FALSE;
    g_mem.FB.airchamber_feedback_active = FALSE;
    
    // set the initialized flag to show EEPROM has been populated
    g_mem.flag = TRUE;
    
    //write that configuration to EEPROM
    return ( memStore(0) && memStore(DEFAULT_EEPROM_DISPLACEMENT) );}

//==============================================================================
//                                                          MEMORY INIT SOFTHAND
//==============================================================================
void memInit_SoftHandPro(void)
{
}

//==============================================================================
//                                                            MEMORY INIT MASTER
//==============================================================================
void memInit_Master(void)
{
}

//==============================================================================
//                                                   MEMORY INIT AIR CHAMBERS FB
//==============================================================================
void memInit_AirChambers_Vibrotactile_Fb()
{
}

//==============================================================================
//                                   MEMORY INIT OTTOBOCK ACTIVE WRIST MASTER FB
//==============================================================================
void memInit_OtbkActWristMs(void)
{
}

//==============================================================================
//                                                    ROUTINE INTERRUPT FUNCTION
//==============================================================================
/**
* Bunch of functions used on request from UART communication
**/

void cmd_get_measurements(){
 
   
}

void cmd_get_velocities(){
 
}

void cmd_get_accelerations(){
 
}

void cmd_get_joystick() {
 
}

void cmd_set_inputs(){
     // Store position setted in right variables
    int16 aux_int16[3];
    static int16 last_aux_int16[3];
    
    aux_int16[0] = (int16)(g_rx.buffer[1]<<8 | g_rx.buffer[2]);
    aux_int16[1] = (int16)(g_rx.buffer[3]<<8 | g_rx.buffer[4]);
    aux_int16[2] = (int16)(g_rx.buffer[5]<<8 | g_rx.buffer[6]);
    // Check if last command received was the same as this 
    //(Note: last command not last motor reference in g_ref)
    for (uint8 i = 0; i < 3; i++) {
       //if(last_aux_int16[i] != aux_int16[i]){
            change_ext_ref_flag[i] = TRUE;
       }
        // Update last command
      // last_aux_int16[i] = aux_int16[i];
    
    
    // Update g_refNew in case a new command has been received
    if (change_ext_ref_flag[0]) {
        Pump_refNew = aux_int16[0];
                
        // Check if the reference is nor higher or lower than the position limits
        if (Pump_refNew < 0)
            Pump_refNew = 0;
                
        if (Pump_refNew > 100)
            Pump_refNew = 100;       
    }
    
    if (change_ext_ref_flag[1]) 
        VT_refNew[0] = aux_int16[1];
    
    if (change_ext_ref_flag[2]) 
        VT_refNew[1] = aux_int16[2];
                
   }

void cmd_activate(){
 uint8 aux = g_rx.buffer[1];
 VALVE_Write((aux >> 1) & 0x01);
 
}

void cmd_get_activate(){
    
}

void cmd_get_curr_and_meas(){
   
   
}

void cmd_get_currents(){
   
    // Packet: header + motor_measure(int16) + crc
    
    uint8 packet_data[6]; 
    int16 aux_int16;
    
    //Header package

    packet_data[0] = CMD_GET_CURRENTS;

     // Send pressure times 100 here instead of current (Simulink use)
    aux_int16 = (int16)(pressure_value * 1000); //Pressure
    if (aux_int16 < 0) aux_int16 = 0;
    packet_data[2] = ((char*)(&aux_int16))[0];
    packet_data[1] = ((char*)(&aux_int16))[1];
    
    
    // aux_int16 = (int16) g_measOld[g_mem.motor[0].encoder_line].estim_curr; //Estimated current
    aux_int16 = (int16)(Battery_level_out);
    
    packet_data[4] = ((char*)(&aux_int16))[0];
    packet_data[3] = ((char*)(&aux_int16))[1];

    // Calculate Checksum and send message to UART 

    packet_data[5] = LCRChecksum (packet_data, 5);
    
    commWrite(packet_data, 6);

}

void cmd_get_currents_for_cuff(){
   
}

void cmd_get_vibrotactile_inputs(){
    
}

void commReadWriteSH( uint8 slave_ID) {
     
    
    
      uint8 packet_data[6];
    uint8 packet_length;
    int16 aux_int16;
uint32 t_start, t_end;
    uint8 read_flag = TRUE;
       
    //Sends a Set inputs command to a second board
 //   packet_data[0] = CMD_DRIVE_SLAVE;
    
 //aux_int16 = (int16) motor_idx;
   aux_int16 = (int16) (SH_ref >> g_mem.SH_config.res);
    packet_data[2] = ((char*)(&aux_int16))[0];
    packet_data[1] = ((char*)(&aux_int16))[1];
    *((int16 *) &packet_data[3]) = 0;
  //  packet_data[3] = (char*)0;
   // packet_data[4] = (char*)0;
    packet_length = 6;
    packet_data[packet_length - 1] = LCRChecksum(packet_data,packet_length - 1);
    commWriteID(packet_data, packet_length, slave_ID);

    t_start = (uint32) MY_TIMER_ReadCounter();
  //  while(g_rx.buffer[0] != CMD_GET_FEEDBACK_INPUT) {
       { if (interrupt_flag){
            interrupt_flag = FALSE;
            interrupt_manager();
        }

        t_end = (uint32) MY_TIMER_ReadCounter();
        if((t_start - t_end) > 4500000){            // 4.5 s timeout
            read_flag = FALSE;
            master_mode = 0;                // Exit from master mode
          //  break;
        }
    }

        if (read_flag) {
        PWM_IMU_1 = (int16)(g_rx.buffer[1]<<8 | g_rx.buffer[2]);      
        PWM_IMU_2 = (int16)(g_rx.buffer[3]<<8 | g_rx.buffer[4]);      
        curr_diff = (int16)(g_rx.buffer[5]<<8 | g_rx.buffer[6]);                        
    }    
    
}


//==============================================================================
//                                                 READ IMU VALUES FROM SOFTHAND
//==============================================================================
void commReadIMUFromSH(){
    // Send CMD_GET_VIBROTACTILE_INPUTS to the slave and gets the PWM control values for the vibrotactile devices,
    // resulted from the processed IMU values.
    // This function use RS485 protocol to communicate with the second board. 
    // Baude Rate is set to 2000000. 
    // Here a request (: : ID pk_length CMD check) is sent  --> 6bytes * 8bit * 0.5us = 24us
    // and an answer (: : ID pk_length CMD data1[0] data1[1] data2[0] data2[1] check) received --> 10bytes * 8bit * 0.5us = 40 us
    // At least 64 us are requested for this communication 
    
    uint8 packet_data[16];
    uint8 packet_length;
   
    uint32 t_start, t_end;
    uint8 read_flag = TRUE;

    packet_length = 2;
    packet_data[0] = CMD_GET_VIBROTACTILE_INPUTS;
    packet_data[1] = CMD_GET_VIBROTACTILE_INPUTS;
    commWriteID(packet_data, packet_length, c_mem.MS.slave_ID);

    t_start = (uint32) MY_TIMER_ReadCounter();
    while(g_rx.buffer[0] != CMD_SET_VIBROTACTILE_INPUTS) {
        if (interrupt_flag){
            interrupt_flag = FALSE;
            interrupt_manager();
        }

        t_end = (uint32) MY_TIMER_ReadCounter();
        if((t_start - t_end) > 4500000){            // 4.5 s timeout
            read_flag = FALSE;
            master_mode = 0;                // Exit from master mode
            break;
        }
    }

        if (read_flag) {
        PWM_IMU_1 = (int16)(g_rx.buffer[1]<<8 | g_rx.buffer[2]);      
        PWM_IMU_2 = (int16)(g_rx.buffer[3]<<8 | g_rx.buffer[4]);      
    }
    
}

//==============================================================================
//                                  READ RESIDUAL CURRENT FUNCTION FROM SOFTHAND
//==============================================================================
// This function use RS485 protocol to communicate with the second board. 
// Baude Rate is set to 2000000. 
// Here a request (: : ID pk_length CMD check) is sent  --> 6bytes * 8bit * 0.5us = 24us
// and an answer (: : ID pk_length CMD data1[0] data1[1] check) received --> 8bytes * 8bit * 0.5us = 32 us
// At least 56 us are requested for this communication 
void commReadResCurrFromSH()
{
    uint8 packet_data[16];
    uint8 packet_length;
    //int16 curr_diff = 0;
    uint32 t_start, t_end;
    uint8 read_flag = TRUE;

    packet_length = 2;
    packet_data[0] = CMD_GET_CURR_DIFF;
    packet_data[1] = CMD_GET_CURR_DIFF;
    commWriteID(packet_data, packet_length, c_mem.MS.slave_ID);

    t_start = (uint32) MY_TIMER_ReadCounter();
    while(g_rx.buffer[0] != CMD_SET_CUFF_INPUTS) {
        if (interrupt_flag){
            interrupt_flag = FALSE;
            interrupt_manager();
        }

        t_end = (uint32) MY_TIMER_ReadCounter();
        if((t_start - t_end) > 4500000){            // 4.5 s timeout
            read_flag = FALSE;
            master_mode = 0;                // Exit from master mode
            break;
        }
    }

    if (read_flag) {
        curr_diff = (int16)(g_rx.buffer[1]<<8 | g_rx.buffer[2]);                        
    }
    
    //return curr_diff;
}


/////////////////////////////////////////////////////////////////////////////////////

void cmd_set_baudrate(){
    
}

void cmd_ping(){

    uint8 packet_data[2];

    // Header
    packet_data[0] = CMD_PING;
    
    // Load Payload
    packet_data[1] = CMD_PING;

    // Send Package to uart
    commWrite(packet_data, 2);
}

void cmd_get_inputs(){

}

void cmd_store_params(){
    
    uint8 CYDATA packet_length = 2;
    uint8 CYDATA packet_data[2];
    uint8 CYDATA old_id;
      
    // Store params 

    if (c_mem.dev.id != g_mem.dev.id) {     //If a new id is going to be set we will lose communication 
        old_id = c_mem.dev.id;          //after the memstore(0) and the ACK won't be recognised
        if(memStore(0)) {
            packet_data[0] = ACK_OK;
            packet_data[1] = ACK_OK;
            commWrite_old_id(packet_data, packet_length, old_id);
        }    
        else{
            packet_data[0] = ACK_ERROR;
            packet_data[1] = ACK_ERROR;
            commWrite_old_id(packet_data, packet_length, old_id);
        }
    }    
    else {
        if(memStore(0))
            sendAcknowledgment(ACK_OK);
        else
            sendAcknowledgment(ACK_ERROR);
    }
    
    // FW reset (if necessary)
    if (reset_PSoC_flag == TRUE) {
        CySoftwareReset();
    }
}

void cmd_get_emg(){
    
    uint8 packet_data[6];
    int16 aux_int16;
    
    // Header        
    packet_data[0] = CMD_GET_EMG;
    
    aux_int16 = (int16) g_adc_measOld.emg[0];
    packet_data[2] = ((char*)(&aux_int16))[0];
    packet_data[1] = ((char*)(&aux_int16))[1];
    
    aux_int16 = (int16) g_adc_measOld.emg[1];
    packet_data[4] = ((char*)(&aux_int16))[0];
    packet_data[3] = ((char*)(&aux_int16))[1];

    packet_data[5] = LCRChecksum (packet_data, 5);

    commWrite(packet_data, 6);

}

void cmd_get_imu_readings(){
 
}

void cmd_get_encoder_map(){
   }

void cmd_get_encoder_raw(){
   }

void cmd_get_ADC_map(){
   }

void cmd_get_ADC_raw(){
   
}

void cmd_get_SD_file( uint16 filename_length ){
    
    uint8 i = 0;
    char CYDATA filename[50] = "";
    char CYDATA str_sd_data[20000] = "";
    strcpy(filename, "");
    strcpy(str_sd_data, "");
    
    for (i=0; i<filename_length; i++){
        *((uint8*)filename + i) = (char)g_rx.buffer[3+i];
    }
    *((uint8*)filename + i) = '\0';
     
    // Check if the file is the one currently opened or not
    if (strcmp(filename, sdFile)){
        Read_SD_Closed_File(filename, str_sd_data, sizeof(str_sd_data));
    }
    else {
        //It is the currently open working file
        Read_SD_Current_Data(str_sd_data, sizeof(str_sd_data));
    }

    //itoa(filename_length, filename, 10);
    // Send the file to API that receives packet as a ping string
    UART_RS485_ClearTxBuffer();
    UART_RS485_PutString(str_sd_data);
}

void cmd_remove_SD_file( uint16 filename_length ){
  
}

//==============================================================================
//                                                          VIBROTACTILE CONTROL
//==============================================================================
/* It asks IMU values to the SoftHand and sets vibrotactile feedback device inputs proportionally.*/

void vibrotactile_control() {
    
    uint8 i;
    
    commReadIMUFromSH();    
    // Ask to the slave the reference commands to drive the vibrotactile devices. 
    // Values received are already the PWM commands computed by the slave board proportional to the IMU values read.
    
    PWM_IMU_1 = (int16)(((float)PWM_IMU_1/50.0) * SCALA);
    if (PWM_IMU_1 > MAX_VT_PWM) PWM_IMU_1 = MAX_VT_PWM;
    if (PWM_IMU_1 < MIN_VT_PWM) PWM_IMU_1 = 0;
    
    PWM_IMU_2 = (int16) (((float)PWM_IMU_2/50.0) * SCALA);
    if (PWM_IMU_2 > MAX_VT_PWM) PWM_IMU_2 = MAX_VT_PWM;
    if (PWM_IMU_2 < MIN_VT_PWM) PWM_IMU_2 = 0;
    
    VT_ref[0] = PWM_IMU_1;
    VT_ref[1] = PWM_IMU_2;
    
    VT_ref[0] = PWM_IMU_1;
    VT_ref[1] = PWM_IMU_2;

    for (i = 0; i < NUM_OF_VT_ACTUATORS; i++){       
        vibrotactile_control_generic(i); // Control the PWM_VT blocks and drive the vibrotactile devices.
        
        if (interrupt_flag){
            interrupt_flag = FALSE;
            interrupt_manager();
        }
    } 
}


//==============================================================================
//                                                          AIR CHAMBERS CONTROL
//==============================================================================
/* It asks current difference to the SoftHand and sets force feedback device inputs proportionally to this difference.*/


void air_chambers_control() {

    int16 curr_diff;
    int32 pressure_reference;
    int32 err_pressure;
    int32 valve_command;
    int16 x_value;

    // Use pressure and residual current read from the SoftHand
    
    commReadResCurrFromSH();

    // Compute pressure reference

    x_value = curr_diff - 50.0;
    if (x_value < 0)
        x_value = 0;
    
    pressure_reference = (int32)((int32)(-30.0*x_value*x_value + 55.0*c_mem.FB.max_residual_current*x_value)/(c_mem.FB.max_residual_current*c_mem.FB.max_residual_current));
    if (pressure_reference < 0)
        pressure_reference = 0;
    if (pressure_reference > c_mem.FB.maximum_pressure_kPa)
        pressure_reference = c_mem.FB.maximum_pressure_kPa;
    
    err_pressure = pressure_reference - pressure_value;       // error in kPa

    if (x_value <= 0){
        //i.e the hand is opening
        valve_command = 0;  //valve open: air passes
    }
    else {
        //i.e the hand is closing, so valve should stay closed independently from the pressure error
        //if err_pressure greater than 0, it means pressure should increase, so valve should stay closed
        //if err_pressure==0, it means you reached the right pressure, so valve should stay closed
        valve_command = 1;  //3.6V (5V - 2 diodes) - valve close: air doesn't pass
    }
    
    // Pump control*/
   
    Pump_refNew = (int32)(c_mem.FB.prop_err_fb_gain*err_pressure);

    //c_mem.FB.prop_err_fb_gain default 1.0 gain since, max err_pressure is 25 and pwm range is approx. 25 ticks [45=2V,70=3V]
    
    // Limit output voltage
    if (Pump_refNew > MAX_PUMP_PWM) // 80 (3.5V) 80% of 4.3V (5V - 1 diode)
        Pump_refNew = MAX_PUMP_PWM; // 80
    if (Pump_refNew < MIN_PUMP_PWM)
        Pump_refNew = 0;
        
    VALVE_Write(valve_command);
    
    
    // Drive slave with reference generated on second motor index
    // Use second motor structures and parameters, only to generate position reference not for PID control
    // IMPORTANT: configure second motor parameters with proper slave parameters
    // motor_control_generic(slave_motor_idx);

}

void pump_control() {
    if (Pump_ref > 100)
        Pump_ref = 100;
    PWM_PUMP_WriteCompare(Pump_ref);
}

void VT_control() {
    if (VT_ref[0] > 100)
        VT_ref[0] = 100;
    PWM_VT_WriteCompare1(VT_ref[0]);
    if (VT_ref[1] > 100)
        VT_ref[1] = 100;
    PWM_VT_WriteCompare2(VT_ref[1]);
}
//==============================================================================
//                                                   EMG ACTIVATION VELOCITY FSM
//==============================================================================
/* It decides which is the current emg activation velocity.*/

uint8 emg_activation_velocity_fsm() {
    
return 0;
}

//==============================================================================
//                                          OTTOBOCK ACTIVE WRIST MASTER CONTROL
//==============================================================================
/* It moves Ottobock active wrist (as master) and connected SoftHand slave according to emg activation velocity.*/

void otbk_act_wrist_control(int slave_motor_idx) {
    
#ifdef OTBK_ACT_WRIST_MS_FW
    
    uint8 fsm_state = emg_activation_velocity_fsm();
        
    // State machine - Evaluate emg activation status
    // Note: in this way, diff_emg_1 and diff_emg_2 are for sure differences between two consecutive activated values
    switch (fsm_state){
        case RELAX_STATE:
            
            // Wrist stop
            g_refNew[0].pwm = 0;
            
            // Softhand stop
            // Do not update the motor reference, so the SoftHand stays still
            g_ref[slave_motor_idx].pos = g_refOld[slave_motor_idx].pos;
            g_refNew[slave_motor_idx].pos = g_ref[slave_motor_idx].pos;
            
            break;
        case TIMER_STATE:     // Timer
                
            break;
        case MOVE_FAST_ACT: // Wrist movement
            
            // Wrist movement
            if (g_adc_meas.emg[0] > g_adc_meas.emg[1]){
                if (c_mem.WR.wrist_direction_association == 0){
                    g_refNew[0].pwm = 60;       //Rotate CW
                }
                else {
                    g_refNew[0].pwm = -60;   // Rotate CCW
                }
            }
            else {
                if (c_mem.WR.wrist_direction_association == 0){
                    g_refNew[0].pwm = -60;   // Rotate CCW
                }
                else {
                    g_refNew[0].pwm = 60;       //Rotate CW
                }
            }
            
            // Softhand stop
            // Do not update the motor reference, so the SoftHand stays still
            g_ref[slave_motor_idx].pos = g_refOld[slave_motor_idx].pos;
            g_refNew[slave_motor_idx].pos = g_ref[slave_motor_idx].pos;
            
            break;
        case MOVE_SLOW_ACT: // Hand movement
            
            // Wrist stop
            g_refNew[0].pwm = 0;
            
            // SoftHand movement
            // Drive slave with reference generated on second motor index
            // Use second motor structures and parameters, only to generate position reference not for PID control
            // IMPORTANT: configure second motor parameters with proper slave parameters
            motor_control_generic(slave_motor_idx);
            
            break;
    }
        
    // Limit output voltage
    if (g_refNew[0].pwm > 67) // 67 (8.4V max of 2S ottobock battery) 66.6% of 12.6V
        g_refNew[0].pwm = 67; // 67
    if (g_refNew[0].pwm < -67)
        g_refNew[0].pwm = -67;
    
#endif
}

//==============================================================================
//                                                                   DRIVE SLAVE
//==============================================================================
 
//==============================================================================
//                                                                   DRIVE SLAVE
//==============================================================================
 
 
void drive_slave( uint8 slave_ID) {
// This function use RS485 protocol to communicate with the second board. 
// Baude Rate is set to 2000000. 
// Here a request (: : ID pk_length CMD check) is sent  --> 6bytes * 8bit * 0.5us = 24us
// and an answer (: : ID pk_length CMD data1[0] data1[1] check) received --> 8bytes * 8bit * 0.5us = 32 us
// At least 56 us are requested for this communication 

    uint8 packet_data[6];
    uint8 packet_length;
    int16 aux_int16;

       
    //Sends a Set inputs command to a second board
    packet_data[0] = CMD_SET_INPUTS;
    
 //aux_int16 = (int16) motor_idx;
   aux_int16 = (int16) (SH_ref >> g_mem.SH_config.res);
    packet_data[2] = ((char*)(&aux_int16))[0];
    packet_data[1] = ((char*)(&aux_int16))[1];
    *((int16 *) &packet_data[3]) = 0;
  //  packet_data[3] = (char*)0;
   // packet_data[4] = (char*)0;
    packet_length = 6;
    packet_data[packet_length - 1] = LCRChecksum(packet_data,packet_length - 1);
    commWriteID(packet_data, packet_length, slave_ID);

}
//==============================================================================
//                                                            STOP MASTER DEVICE
//==============================================================================
 
void stop_master_device() {
    
        // Stop pump and open valve
        Pump_ref = 0;    
        VALVE_Write(OPEN);
        master_mode = 0; 
        g_mem.MS.master_mode_active = FALSE;

}

//==============================================================================
//                                                             DEACTIVATE SLAVES
//==============================================================================
 
void deactivate_slaves() {
   
}

/* [] END OF FILE */