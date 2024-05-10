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
* \file         globals.c
*
* \brief        Global variables.
* \date         March 20th, 2020
* \author       _Centro "E.Piaggio"_
* \copyright    (C) 2012-2016 qbrobotics. All rights reserved.
* \copyright    (C) 2017-2020 Centro "E.Piaggio". All rights reserved.
*/

//=================================================================     includes
#include "globals.h"

//=============================================      global variables definition


 int32 SH_ref, SH_refOld, SH_refNew ;                          /*!< Motor position reference for SH.*/
 uint8 VT_ref[NUM_OF_VT_ACTUATORS], VT_refOld[NUM_OF_VT_ACTUATORS], VT_refNew[NUM_OF_VT_ACTUATORS];
 uint8 Pump_ref, Pump_refOld, Pump_refNew ;
 uint8 ValveState,ValveStateOld,ValveStateNew;;

int16 ADC_buf[3];     /*! ADC measurements buffer.*/
uint8 NUM_OF_ANALOG_INPUTS = 3;             /*! ADC currently configured channels.*/
struct st_eeprom    g_mem, c_mem;               // Memory variables.
 
int32 pressure_value, atm_pressure,Battery_level_out;
CYBIT interrupt_flag = FALSE;               /*!< Interrupt flag enabler.*/
int32 flag_master;
uint8 master_mode;               /*!< Flag used to set/unset master mode to send messages to other boards.*/
 uint16 timer_value;                          /*!< End time of the firmware main loop.*/
 uint16 timer_value0;                         /*!< Start time of the firmware main loop.*/
 float cycle_time;							/*!< Variable used to calculate how much time a cycle takes.*/
struct st_data      g_rx;                       // Income data.
 int16 PWM_IMU_1;     
 int16 PWM_IMU_2;  
int16 curr_diff;  
CYBIT reset_PSoC_flag = FALSE;              /*!< This flag is set when a board fw reset is necessary.*/



struct st_filter    filt_emg[NUM_OF_INPUT_EMGS];                // EMG filter variables.
struct st_adc_meas  g_adc_meas, g_adc_measOld;  // EMG Measurements.

struct st_data      g_rx;                       // Income data.
struct st_eeprom    g_mem, c_mem;               // Memory variables.
struct st_filter    filt_detect_pc;             // Battery tension filter to detect a new power cycle.


// Timer value for debug field
uint16  timer_value;
uint16  timer_value0;
float   cycle_time;

// Device Data
int32 flag_master;
int32   detect_power_cycle = 0;             /*!< Variable used to detect a new power cycle.*/

counter_status CYDATA cycles_status = NONE;     /*!< Cycles counter state machine status.*/

    
// Bit Flag

CYBIT tension_valid;                        /*!< Tension validation bit.*/

CYBIT cycles_interrupt_flag = FALSE;        /*!< Cycles timer interrupt flag enabler.*/
uint8 maintenance_flag = FALSE;             /*!< Maintenance flag.*/
CYBIT can_write = TRUE;                     /*!< Write to EEPROM flag.*/
uint8 rest_enabled;                         /*!< Rest position flag.*/
uint8 forced_open;                          /*!< Forced open flag (used in position with rest position control).*/                               
uint8 battery_low_SoC = FALSE;              /*!< Battery low State of Charge flag (re-open terminal device when active).*/
uint8 change_ext_ref_flag[3];          /*!< This flag is set when an external reference command is received.*/


// ADC Buffer



// Rest Position variables
int32 rest_pos_curr_ref;                     /*!< Rest position current reference.*/

// SD variables
FS_FILE * pFile;
char sdFile[100] = "";
char sdParam[100] = "";
FS_FILE * pEMGHFile;
char sdEMGHFile[100] = "\\EMG_History.csv";
char sdR01File[100] = "\\R01_Summary.csv";


// MASTER variables
uint8 master_mode;               /*!< Flag used to set/unset master mode to send messages to other boards.*/

// EMG HISTORY
uint16 emg_history[SAMPLES_FOR_EMG_HISTORY][NUM_OF_INPUT_EMGS];   /*!< EMG data with the history of last activity.*/
uint32 emg_history_next_idx;    /*!< Vector index of last (newest) element.*/

 int16 PWM_IMU_1 = 0;     
 int16 PWM_IMU_2 = 0; 
 char superstring[2500]= "";


/* END OF FILE */