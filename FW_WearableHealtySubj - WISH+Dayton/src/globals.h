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
* \file         globals.h
*
* \brief        Global definitions and macros are set in this file.
* \date         March 20th, 2020
* \author       _Centro "E.Piaggio"_
* \copyright    (C) 2012-2016 qbrobotics. All rights reserved.
* \copyright    (C) 2017-2020 Centro "E.Piaggio". All rights reserved.
*
*/

#ifndef GLOBALS_H_INCLUDED
#define GLOBALS_H_INCLUDED
// -----------------------------------------------------------------------------

//=================================================================     includes
#include "FIRMWARE_CONFIGURATION.h"
#include "device.h"
#include "stdlib.h"
#include "string.h"
#include "stdio.h"
#include "math.h"
#include "commands.h"
#include "FS.h"

//==============================================================================
//                                                                        DEVICE
//==============================================================================
#define NUM_OF_HAPTIC_ACTUATORS 2
#define NUM_OF_INPUT_EMGS       2       /*!< Number of emg channels.*/

//==============================================================================
//                                                                           DMA
//==============================================================================
    
#define DMA_BYTES_PER_BURST 2
#define DMA_REQUEST_PER_BURST 1
#define DMA_SRC_BASE (CYDEV_PERIPH_BASE)
#define DMA_DST_BASE (CYDEV_SRAM_BASE)  
//==============================================================================
//                                                                     INTERRUPT
//==============================================================================

#define    WAIT_START   0               /*!< Package start waiting status.*/
#define    WAIT_ID      1               /*!< Package ID waiting status.*/
#define    WAIT_LENGTH  2               /*!< Package length waiting status.*/
#define    RECEIVE      3               /*!< Package data receiving status.*/
#define    UNLOAD       4               /*!< Package data flush status.*/

//==============================================================================
//                                                               VIBROTACTILE FB
//==============================================================================
#define NUM_OF_VT_ACTUATORS     2           
#define NUM_OF_EXTERNAL_IMU     2
#define SCALA                   30
#define MIN_VT_PWM              10
#define MAX_VT_PWM              100
#define MIN_PUMP_PWM            20
#define MAX_PUMP_PWM            80
//==============================================================================
//                                                              STRUCTURES INDEX
//==============================================================================
// First digit: struct, Second digit: index, e.g. ST_MOTOR_0 10, ST_MOTOR_1 11    
#define ST_DEVICE       0
#define ST_MOTOR        10          
#define ST_ENCODER      20
#define ST_EMG          30
#define ST_IMU          40
#define ST_EXPANSION    50
#define ST_USER         60
#define ST_SH_SPEC      70
#define ST_MS_SPEC      80
#define ST_FB_SPEC      90
#define ST_WR_SPEC      100
#define ST_JOY_SPEC     110
    
//==============================================================================
//                                                                         OTHER
//==============================================================================

#define CLOSED                  1 
#define OPEN                    0
#define FALSE                   0
#define TRUE                    1
#define RED                     1
#define GREEN                   2
#define ORANGE                  3
#define DEFAULT_EEPROM_DISPLACEMENT 50  /*!< Number of pages occupied by the EEPROM.*/
#define EEPROM_BYTES_ROW        16      /*!< EEPROM number of bytes per row.*/
#define EEPROM_COUNTERS_ROWS    7       /*!< EEPROM number of rows dedicated to store counters.*/
#define EEPROM_AFTER_CNT_FREE_ROWS 2    /*!< EEPROM number of rows free after counters.*/   
#define PWM_MAX_VALUE_DC        100     /*!< Maximum value of the PWM signal.*/
#define PWM_MAX_VALUE_ESC       2985    /*!< Maximum value of the PWM signal for ESC driver module.*/
#define ANTI_WINDUP             1000    /*!< Anti windup saturation.*/ 
#define DEFAULT_CURRENT_LIMIT   1500    /*!< Default Current limit, 0 stands for unlimited.*/
#define CURRENT_HYSTERESIS      10      /*!< milliAmperes of hysteresis for current control.*/
#define EMG_SAMPLE_TO_DISCARD   500     /*!< Number of sample to discard before calibration.*/
#define SAMPLES_FOR_MEAN        100     /*!< Number of samples used to mean current values.*/
#define SAMPLES_FOR_EMG_MEAN    1000    /*!< Number of samples used to mean emg values.*/
#define SAMPLES_FOR_JOYSTICK_MEAN   200 /*!< Number of samples used to mean joystick values.*/
#define JOYSTICK_SAMPLE_TO_DISCARD  100 /*!< Number of samples to discard before having joystick stable values.*/
#define REST_POS_ERR_THR_GAIN   10      /*!< Gain related to stop condition threshold in rest position routine.*/
#define POS_INTEGRAL_SAT_LIMIT  50000000    /*!< Anti windup on position control.*/
#define CURR_INTEGRAL_SAT_LIMIT 100000      /*!< Anti windup on current control.*/
#define PWM_RATE_LIMITER_MAX	1
#define SAFE_STARTUP_MOTOR_READINGS 8000    /*!< Number of encoder readings after position reconstruction before activating motor.*/
#define LOOKUP_DIM              6           /*!< Dimension of the current lookup table.*/
#define PREREVISION_CYCLES      400000      /*!< Number of SoftHand Pro cycles before maintenance.*/    
#define SAMPLES_FOR_EMG_HISTORY 600 /*!< Number of EMG history values ( 5 smpls/sec. x 120 secs = 600 smpls / channel ).*/

 
    
//==============================================================================
//                                                        structures definitions
//==============================================================================

//==============================================================     data packet
/** \brief Data sent/received structure
 *
**/
struct st_data{
    uint8   buffer[128];            /*!< Data buffer [CMD | DATA | CHECKSUM].*/
    int16   length;                 /*!< Data buffer length.*/
    int16   ind;                    /*!< Data buffer index.*/
    uint8   ready;                  /*!< Data buffer flag to see if the data is ready.*/
};

//============================================     settings stored on the memory


//=================================================     Device
/** \brief Device related parameters structure
 *
**/ 
struct st_device{
    uint8   id;    
    uint8 baud_rate; /*!< Device id.*/  
    uint8   unused_bytes[14];            /*!< Unused bytes to fill row.*/                                    //3
}; 

//=================================================     Motor
/** \brief Motor related parameters structure
 *
**/ 
struct st_slave{    
    
    int32   pos_lim_inf;                /*!< Inferior position limit for motor.*/                           //4     
    int32   pos_lim_sup;                /*!< Superior position limit for motor[0].*/                           //4                           //2
    uint8   input_mode;                 /*!< Motor Input mode.*/                                            //1 
    uint8   res;//
    uint8   unused_bytes[6];           /*!< Unused bytes to fill row.*/                                    //13
};  


//=================================================     EMG
/** \brief EMG related parameters structure
 *
**/ 
struct st_emg{
    uint16  emg_threshold[NUM_OF_INPUT_EMGS]; /*!< Minimum value for activation of EMG control.*/           //4
    uint32  emg_max_value[NUM_OF_INPUT_EMGS]; /*!< Maximum value for EMG.*/                                 //8     
    uint8   emg_speed[NUM_OF_INPUT_EMGS];     /*!< Maximum closure speed when using EMG.*/                  //2    
    uint8   switch_emg;                 /*!< EMG opening/closure switch.*/                                  //1
    uint8   unused_bytes[1];           /*!< Unused bytes to fill row.*/                                    //13
};    

//=================================================     Master specific
/** \brief Master mode specific parameters structure
 *
**/
struct st_MASTER_spec{
    uint8   master_mode_active;          /*!< Slave communication active flag.*/                             //1
    uint8   slave_ID;                   /*!< Slave ID.*/                                                    //1
    uint8   unused_bytes[14];           /*!< Unused bytes to fill row.*/                                    //14
};                                                                                                          // TOTAL: 16 BYTES 

//=================================================     Feedback specific
/** \brief Feedback mode specific parameters structure
 *
**/ 
struct st_FB_spec{    
    int32   max_residual_current;           /*!< Maximum slave residual current.*/                              //4
    float   maximum_pressure_kPa;           /*!< Maximum pressure for feedback (in kPa).*/                      //4
    float   prop_err_fb_gain;               /*!< Gain for proportional error fo rfeedback.*/                    //4
    uint8   vibrotactile_feedback_active;   /*!< Vibrotactile feedback active flag*/                            //1
    uint8   airchamber_feedback_active;     /*!< Air Chamber feedback active flag.*/                            //1
    uint8   unused_bytes[2];                /*!< Unused bytes to fill row.*/                                    //2
};                                                                                                          // TOTAL: 16 BYTES 
 
                                                                                                       // TOTAL: 16 BYTES 

//-------------------------------------------- MEMORY VARIABLES ---------------------------------------------// 
/** \brief Memory variables
 *
**/ 
// Since PSOC5 ARM memory is 4-bytes aligned, st_mem structure variables are not contiguous
struct st_eeprom {
    uint8  flag;                        /*!< If checked the device has been configured.*/                   //1 byte
    uint8  unused_bytes[15];            /*!< Leave bytes to align structures to memory rows.*/              //1 row     (End of row 1)
    struct st_device dev;
    struct st_slave SH_config;          /*!< Motor variables.*/                                     //7*2 rows  (End of row 25)
    struct st_emg emg;                  /*!< EMG variables.*/                                               //1 row     (End of row 32)                               //1 row     (End of row 44)
    struct st_MASTER_spec MS;           /*!< Master specific variables.*/                                   //1 row     (End of row 45)
    struct st_FB_spec FB;               /*!< Feedback specific variables.*/                                 //1 row     (End of row 46) 
};

//=================================================     filter variables
/** \brief Filter structure
 *
**/ 
struct st_filter{
    int32 old_value;                /*!< Old variable value.*/
    int32 gain;                     /*!< New value filter weight.*/
};

typedef enum {
    
    PREPARE_DATA    = 0,            /*!< Prepare data to be written on EEPROM.*/
    WRITE_CYCLES    = 1,            /*!< Cycles writing on EEPROM is enabled and control is passed to query.*/
    WAIT_QUERY      = 2,            /*!< Wait until EEPROM_Query() has finished writing on EEPROM and then disable cycles writing.*/
    WRITE_END       = 3,            /*!< End of EEPROM writing.*/
    NONE            = 4             /*!< Cycles writing on EEPROM is disabled.*/
} counter_status;                   /*!< Cycles counter state machine status.*/ 

//====================================      external global variables definition


extern struct st_adc_meas g_adc_meas, g_adc_measOld;/*!< EMG Measurements.*/
extern struct st_fb_meas g_fb_meas;                 /*!< Haptic Feedback Measurements.*/
extern struct st_data   g_rx;                       /*!< Incoming/Outcoming data.*/
extern struct st_eeprom g_mem, c_mem;               /*!< Memory parameters.*/
extern struct st_calib  calib;                      /*!< Calibration variables.*/


extern struct st_filter filt_detect_pc;             /*!< Battery tension filter to detect a new power cycle.*/

extern uint16 timer_value;                          /*!< End time of the firmware main loop.*/
extern uint16 timer_value0;                         /*!< Start time of the firmware main loop.*/
extern float cycle_time;							/*!< Variable used to calculate how much time a cycle takes.*/

extern int32 flag_master;

    
// Bit Flag

extern CYBIT tension_valid;                         /*!< Tension validation bit.*/
extern CYBIT interrupt_flag;                        /*!< Interrupt flag enabler.*/
extern CYBIT cycles_interrupt_flag;                 /*!< Cycles timer interrupt flag enabler.*/
extern uint8 maintenance_flag;                      /*!< Maintenance flag.*/
extern CYBIT can_write;                             /*!< Write to EEPROM flag.*/
extern uint8 rest_enabled;                          /*!< Rest position flag.*/
extern uint8 forced_open;                           /*!< Forced open flag (used in position with rest position control).*/
extern uint8 battery_low_SoC;                       /*!< Battery low State of Charge flag (re-open terminal device when active).*/
extern uint8 change_ext_ref_flag[3];                   /*!< This flag is set when an external reference command is received.*/
extern CYBIT reset_PSoC_flag;                       /*!< This flag is set when a board fw reset is necessary.*/

// ADC Buffer
extern int16 ADC_buf[3];      /*! ADC measurements buffer (sizeof buffer equal to maximum number of ADC channels).*/
extern uint8 NUM_OF_ANALOG_INPUTS;                  /*! ADC currently configured channels.*/

// Rest Position variables
extern int32 rest_pos_curr_ref;                     /*!< Rest position current reference.*/

// SD variables
extern FS_FILE * pFile;
extern char sdFile[100];
extern char sdParam[100];
extern FS_FILE * pEMGHFile;
extern char sdEMGHFile[100];
extern char sdR01File[100];

// MASTER variables
extern uint8 master_mode;               /*!< Flag used to set/unset master mode to send messages to other boards.*/

// EMG HISTORY    
extern uint16 emg_history[SAMPLES_FOR_EMG_HISTORY][NUM_OF_INPUT_EMGS];   /*!< EMG data with the history of last activity.*/
extern uint32 emg_history_next_idx;    /*!< Vector index of last (newest) element.*/

struct menu{
    uint8 name;
    uint8 reset;           /*!< Data buffer [CMD | DATA | CHECKSUM].*/
    const char* choice[10];
};

struct parameter{
    uint8* VAR_P;            /*!< Data buffer [CMD | DATA | CHECKSUM].*/
    uint8 TYPES;                 /*!< Data buffer length.*/
    uint8 NUM_ITEMS;                    /*!< Data buffer index.*/
    const char* PARAM_STR;                  /*!< Data buffer flag to see if the data is ready.*/
    uint8 MENU;
    uint8 NUM_STR;
    uint8 custom;
    uint8 ping;
};
//=================================================     filter variables
/** \brief Filter structure
 *
**/ 

extern const struct menu MENU_LIST[];
extern struct parameter param_type;
extern const struct parameter PARAM_LIST[];
extern struct menu menu_type;
// -----------------------------------------------------------------------------

extern int32 SH_ref, SH_refOld, SH_refNew ;                          /*!< Motor position reference for SH.*/
extern uint8 VT_ref[NUM_OF_VT_ACTUATORS], VT_refOld[NUM_OF_VT_ACTUATORS], VT_refNew[NUM_OF_VT_ACTUATORS];
extern uint8 Pump_ref, Pump_refOld, Pump_refNew ;
extern uint8 ValveState, ValveStateOld,ValveStateNew;
extern int16 PWM_IMU_1;     
extern int16 PWM_IMU_2;  


struct st_adc_meas {
    int32 emg[NUM_OF_INPUT_EMGS];           /*!< EMG sensors values.*/
    float pressure;  /*!< Additional EMG sensors values.*/  
    };


// ADC Buffer

extern uint8 NUM_OF_ANALOG_INPUTS;                  /*! ADC currently configured channels.*/

extern struct st_data   g_rx;                       /*!< Incoming/Outcoming data.*/
extern CYBIT interrupt_flag;                        /*!< Interrupt flag enabler.*/
extern CYBIT reset_PSoC_flag;                       /*!< This flag is set when a board fw reset is necessary.*/
extern int32 flag_master;
extern uint8 master_mode;   
extern int32 pressure_value, atm_pressure, Battery_level_out; /*!< Flag used to set/unset master mode to send messages to other boards.*/
extern struct st_eeprom g_mem, c_mem;               /*!< Memory parameters.*/
extern struct st_adc_meas g_adc_meas, g_adc_measOld;/*!< EMG Measurements.*/
extern uint16 timer_value;                          /*!< End time of the firmware main loop.*/
extern uint16 timer_value0;                         /*!< Start time of the firmware main loop.*/
extern float cycle_time;							/*!< Variable used to calculate how much time a cycle takes.*/

// PWM value
extern int8 pwm_sign[NUM_OF_VT_ACTUATORS];                /*!< Sign of pwm driven. Used to obtain current sign.*/


//=================================================     filter variables
/** \brief Filter structure
 *
**/ 
extern struct st_filter filt_emg[NUM_OF_INPUT_EMGS]; /*!< EMG filter variables.*/
extern const struct menu MENU_LIST[];
extern struct parameter param_type;
extern const struct parameter PARAM_LIST[];
extern struct menu menu_type;

// -----------------------------------------------------------------------------
extern int16 PWM_IMU_1;     
extern int16 PWM_IMU_2;  

extern char superstring[2500];

#endif

//[] END OF FILE