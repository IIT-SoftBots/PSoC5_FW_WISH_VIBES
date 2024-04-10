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
#define NUM_OF_MOTORS           2       /*!< Number of motors.*/
#define NUM_OF_SENSORS          3       /*!< Number of encoders.*/
#define NUM_OF_INPUT_EMGS       2       /*!< Number of emg channels.*/
#define NUM_OF_ADDITIONAL_EMGS  6       /*!< Number of additional emg channels.*/
#define NUM_OF_ADC_CHANNELS_MAX (4+NUM_OF_INPUT_EMGS+NUM_OF_ADDITIONAL_EMGS)    
#define NUM_OF_MS_PARAMS        2       /*!< Number of master parameters saved in the EEPROM.*/
#define NUM_OF_FB_PARAMS        5       /*!< Number of feedback parameters saved in the EEPROM.*/
#define NUM_OF_WR_PARAMS        1       /*!< Number of wrist parameters saved in the EEPROM.*/
#define NUM_OF_PARAMS           (75 + NUM_OF_MS_PARAMS + NUM_OF_FB_PARAMS + NUM_OF_WR_PARAMS)      /*!< Number of parameters saved in the EEPROM.*/
#define NUM_OF_PARAMS_MENU      12      /*!< Number of parameters menu.*/    
#define N_IMU_MAX               5    
#define NUM_OF_IMU_DATA         5       // accelerometers, gyroscopes, magnetometers, quaternion and temperature data
#define N_ENCODER_LINE_MAX      2       /*!< Max number of CS lines which can contain encoders.*/
#define N_ENCODERS_PER_LINE_MAX 5       /*!< Max number of encoders per line.*/
#define N_ENCODERS              NUM_OF_SENSORS
//==============================================================================
//                                                               SYNCHRONIZATION
//==============================================================================

//Main frequency 5000 Hz (110 us - max. 200 us cycle time)
#define CALIBRATION_DIV         10      /*!< Frequency divisor for hand calibration (500Hz).*/
#define DIV_INIT_VALUE          1       /*!< Initial value for hand counter calibration.*/

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
//                                                                 CYCLE COUNTER
//==============================================================================
        
#define STATE_INACTIVE  0               /*!< Open SoftHand position / EMG Inactive.*/
#define STATE_ACTIVE    1               /*!< Closed SoftHand position / EMG Active.*/
#define COUNTER_INC     2               /*!< Counter cycle increment.*/

//==============================================================================
//                                                      SPI DELAY (MICROSECONDS)
//==============================================================================
#define SPI_DELAY_LOW       10
#define SPI_DELAY_HIGH      100

//==============================================================================
//                                                                EXPANSION PORT
//==============================================================================
#define EXP_NONE       0
#define EXP_SD_RTC     1
#define EXP_WIFI       2
#define EXP_OTHER      3    

//==============================================================================
//                                                             MOTOR DRIVER TYPE
//==============================================================================
#define DRIVER_MC33887  0       // Standard motor driver
#define DRIVER_VNH5019  1       // High power motor driver
#define DRIVER_BRUSHLESS 2      // ESC driver for brushless motors
 
//==============================================================================
//                                                                     HAND SIDE
//==============================================================================
#define RIGHT_HAND              0
#define LEFT_HAND               1   
    
//==============================================================================
//                                                                          USER
//==============================================================================
#define NUM_OF_USERS    3
#define GENERIC_USER    0
#define MARIA           1
#define R01             2   
    
//==============================================================================
//                                                                   DEVICE TYPE
//==============================================================================
#define SOFTHAND_PRO        0
#define GENERIC_2_MOTORS    1
#define AIR_CHAMBERS_FB     2
#define OTBK_ACT_WRIST_MS   3  
#define SOFTHAND_2_MOTORS   4    
#define CUFF                5 
    
//==============================================================================
//                                                               WRIST FSM STATE
//==============================================================================
#define RELAX_STATE         0 
#define TIMER_STATE         1
#define MOVE_FAST_ACT       2
#define MOVE_SLOW_ACT       3
    
//==============================================================================
//                                                               VIBROTACTILE FB
//==============================================================================
        
#define NUM_OF_EXTERNAL_IMU     2
#define SCALA                   30
#define MIN_INPUT_PWM           10
#define MAX_INPUT_PWM           100

//==============================================================================
//                                                                   MOTOR GEARS
//==============================================================================
    
// Number of teeth of the two gears
#define SH_N1 35           /*!< Number of teeth of the first encoder gear in SoftHandPro device.*/
#define SH_N2 3            /*!< Number of teeth of the second encoder gear in SoftHandPro device.*/
#define SH_I1 -1           /*!< First gear invariant value in SoftHandPro device.*/
//#define SH_I2 12         /*!< Second gear invariant value in SoftHandPro device.*/
    
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
#define YELLOW                  3
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

 #define NUM_OF_VT_ACTUATORS 2   
    
    //==============================================================================
//                                                        structures definitions
//==============================================================================

//=========================================================     motor references
/** \brief Motor Reference structure
 * 
**/
    

struct st_ref {
    int32 pos;                      /*!< Motor position reference.*/
    int32 curr;                     /*!< Motor current reference.*/
    int32 pwm;                      /*!< Motor direct pwm control.*/
    uint8 onoff;                    /*!< Motor drivers enable.*/
};

//=============================================================     measurements
/** \brief Measurements structure
 * 
**/
struct st_meas {
    int32 pos[NUM_OF_SENSORS];      /*!< Encoder sensor position.*/
    int32 curr;                     /*!< Motor current.*/
    int32 estim_curr;               /*!< Current estimation.*/
    int32 hold_curr;                /*!< Maximum current reached while grasping.*/
    int8 rot[NUM_OF_SENSORS];       /*!< Encoder sensor rotations.*/
    int32 vel[NUM_OF_SENSORS];      /*!< Encoder rotational velocity.*/
    int32 acc[NUM_OF_SENSORS];      /*!< Encoder rotational acceleration.*/
};


struct st_fb_meas {
    float pressure;                 /*!< Pressure sensor measurements.*/
};

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

//=================================================     Counters
/** \brief Usage counters structure
 *
**/ 

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

//=================================================     IMU variables
/** \brief IMU data structure
 *
**/ 
struct st_imu_data {
    uint8 flags;        // Flags to know what we are reading (0/1) from each imu [ accel | gyro | magn | quat | temp ]
    int16 accel_value[3];
    int16 gyro_value[3];
    int16 mag_value[3];
    float quat_value[4];
    int16 temp_value;
};

//=================================================     filter variables
/** \brief Filter structure
 *
**/ 
struct st_filter{
    int32 old_value;                /*!< Old variable value.*/
    int32 gain;                     /*!< New value filter weight.*/
};

//==============================================     hand calibration parameters
/** \brief Hand calibration structure
 *
**/ 
struct st_calib {
    uint8   enabled;                /*!< Calibration enabling flag.*/
    uint8   direction;              /*!< Direction of motor winding.*/
    int16   speed;                  /*!< Speed of hand opening/closing.*/
    int16   repetitions;            /*!< Number of cycles of hand closing/opening.*/
};

//=================================================     emg status
typedef enum {

    NORMAL        = 0,              /*!< Normal execution.*/
    RESET         = 1,              /*!< Reset analog measurements.*/
    DISCARD       = 2,              /*!< Discard first samples to obtain a correct value.*/
    SUM_AND_MEAN  = 3,              /*!< Sum and mean a definite value of samples.*/
    WAIT          = 4,              /*!< The second emg waits until the first emg has a valid value.*/
    WAIT_EoC      = 5               /*!< The second emg waits for end of calibration.*/
} adc_status;                       /*!< ADC status enumeration.*/

typedef enum {
    
    PREPARE_DATA    = 0,            /*!< Prepare data to be written on EEPROM.*/
    WRITE_CYCLES    = 1,            /*!< Cycles writing on EEPROM is enabled and control is passed to query.*/
    WAIT_QUERY      = 2,            /*!< Wait until EEPROM_Query() has finished writing on EEPROM and then disable cycles writing.*/
    WRITE_END       = 3,            /*!< End of EEPROM writing.*/
    NONE            = 4             /*!< Cycles writing on EEPROM is disabled.*/
} counter_status;                   /*!< Cycles counter state machine status.*/ 

//====================================      external global variables definition


extern struct st_ref    g_ref[NUM_OF_MOTORS], g_refNew[NUM_OF_MOTORS], g_refOld[NUM_OF_MOTORS], g_ref_Toast[NUM_OF_HAPTIC_ACTUATORS], g_refOld_Toast[NUM_OF_HAPTIC_ACTUATORS]; /*!< Reference variables.*/
extern struct st_meas   g_meas[N_ENCODER_LINE_MAX], g_measOld[N_ENCODER_LINE_MAX];              /*!< Measurements.*/
extern struct st_adc_meas g_adc_meas, g_adc_measOld;/*!< EMG Measurements.*/
extern struct st_fb_meas g_fb_meas;                 /*!< Haptic Feedback Measurements.*/
extern struct st_data   g_rx;                       /*!< Incoming/Outcoming data.*/
extern struct st_eeprom g_mem, c_mem;               /*!< Memory parameters.*/
extern struct st_calib  calib;                      /*!< Calibration variables.*/
extern struct st_filter filt_v[NUM_OF_MOTORS], filt_curr_diff[NUM_OF_MOTORS], filt_i[NUM_OF_MOTORS];     /*!< Voltage and current filter variables.*/
extern struct st_filter filt_vel[NUM_OF_SENSORS];                /*!< Velocity filter variables.*/
extern struct st_filter filt_emg[NUM_OF_INPUT_EMGS+NUM_OF_ADDITIONAL_EMGS]; /*!< EMG filter variables.*/
extern struct st_filter filt_detect_pc;             /*!< Battery tension filter to detect a new power cycle.*/

extern uint16 timer_value;                          /*!< End time of the firmware main loop.*/
extern uint16 timer_value0;                         /*!< Start time of the firmware main loop.*/
extern float cycle_time;							/*!< Variable used to calculate how much time a cycle takes.*/

extern int32 flag_master;
extern int32    dev_tension[NUM_OF_MOTORS];         /*!< Power supply tension.*/
extern uint16   dev_pwm_limit[NUM_OF_MOTORS];       /*!< Device pwm limit. It may change during execution.*/
extern uint16   dev_pwm_sat[NUM_OF_MOTORS];         /*!< Device pwm saturation.*/
extern int32    dev_tension_f[NUM_OF_MOTORS];       /*!< Filtered power supply tension.*/
extern int32    pow_tension[NUM_OF_MOTORS];         /*!< Computed power supply tension.*/
extern int32    detect_power_cycle;                 /*!< Variable used to detect a new power cycle.*/

extern counter_status CYDATA cycles_status;         /*!< Cycles counter state machine status.*/
extern adc_status CYDATA emg_1_status;              /*!< First EMG sensor status.*/
extern adc_status CYDATA emg_2_status;              /*!< Second EMG sensor status.*/      
extern adc_status CYDATA joy_UD_status;             /*!< Joystick UP/DOWN status.*/
extern adc_status CYDATA joy_LR_status;             /*!< Joystick LEFT/RIGHT status.*/
    
// Bit Flag
extern CYBIT reset_last_value_flag[N_ENCODER_LINE_MAX]; /*!< This flag is set when the encoders last values must be resetted.*/
extern CYBIT tension_valid;                         /*!< Tension validation bit.*/
extern CYBIT interrupt_flag;                        /*!< Interrupt flag enabler.*/
extern CYBIT cycles_interrupt_flag;                 /*!< Cycles timer interrupt flag enabler.*/
extern uint8 maintenance_flag;                      /*!< Maintenance flag.*/
extern CYBIT can_write;                             /*!< Write to EEPROM flag.*/
extern uint8 rest_enabled;                          /*!< Rest position flag.*/
extern uint8 forced_open;                           /*!< Forced open flag (used in position with rest position control).*/
extern uint8 battery_low_SoC;                       /*!< Battery low State of Charge flag (re-open terminal device when active).*/
extern uint8 change_ext_ref_flag;                   /*!< This flag is set when an external reference command is received.*/
extern CYBIT reset_PSoC_flag;                       /*!< This flag is set when a board fw reset is necessary.*/

// ADC Buffer
extern int16 ADC_buf[3];      /*! ADC measurements buffer (sizeof buffer equal to maximum number of ADC channels).*/
extern uint8 NUM_OF_ANALOG_INPUTS;                  /*! ADC currently configured channels.*/

// PWM value
extern int8 pwm_sign[NUM_OF_MOTORS];                /*!< Sign of pwm driven. Used to obtain current sign.*/

// Encoder variables
extern uint32 data_encoder_raw[N_ENCODER_LINE_MAX][N_ENCODERS_PER_LINE_MAX];
extern uint8 N_Encoder_Line_Connected[N_ENCODER_LINE_MAX]; // Used to map how many encoders are connected to each CS pin, there are N_ENCODER_LINE_MAX CS on the board and each of them can contain N_ENCODERS_PER_LINE_MAX encoders
extern uint16 Encoder_Value[N_ENCODER_LINE_MAX][N_ENCODERS_PER_LINE_MAX];
extern uint8 Encoder_Check[N_ENCODER_LINE_MAX][N_ENCODERS_PER_LINE_MAX];
extern CYBIT pos_reconstruct[N_ENCODER_LINE_MAX];

// Rest Position variables
extern int32 rest_pos_curr_ref;                     /*!< Rest position current reference.*/

// SD variables
extern FS_FILE * pFile;
extern char sdFile[100];
extern char sdParam[100];
extern FS_FILE * pEMGHFile;
extern char sdEMGHFile[100];
extern char sdR01File[100];

// IMU variables
extern uint8 N_IMU_Connected;
extern uint8 IMU_connected[N_IMU_MAX];
extern int imus_data_size;
extern int single_imu_size[N_IMU_MAX];
extern struct st_imu_data g_imu[N_IMU_MAX], g_imuNew[N_IMU_MAX];
extern uint8 Accel[N_IMU_MAX][6];
extern uint8 Gyro[N_IMU_MAX][6];
extern uint8 Mag[N_IMU_MAX][6];
extern uint8 MagCal[N_IMU_MAX][3];
extern uint8 Temp[N_IMU_MAX][2];
extern float Quat[N_IMU_MAX][4];

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



extern int32 SH_ref, SH_refOld, SH_refNew ;                          /*!< Motor position reference for SH.*/
extern uint8 VT_ref[NUM_OF_VT_ACTUATORS], VT_refOld[NUM_OF_VT_ACTUATORS], VT_refNew[NUM_OF_VT_ACTUATORS];
extern uint8 Pump_ref, Pump_refOld, Pump_refNew ;
extern uint8 ValveState, ValveStateOld,ValveStateNew;

extern struct st_data   g_rx;                       /*!< Incoming/Outcoming data.*/
extern CYBIT interrupt_flag;                        /*!< Interrupt flag enabler.*/
extern CYBIT reset_PSoC_flag;                       /*!< This flag is set when a board fw reset is necessary.*/
extern int32 flag_master;
extern uint8 master_mode;   
extern int32 pressure_value; /*!< Flag used to set/unset master mode to send messages to other boards.*/
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

extern const struct menu MENU_LIST[];
extern struct parameter param_type;
extern const struct parameter PARAM_LIST[];
extern struct menu menu_type;

// -----------------------------------------------------------------------------
extern int16 PWM_IMU_1;     
extern int16 PWM_IMU_2;  
#endif

//[] END OF FILE