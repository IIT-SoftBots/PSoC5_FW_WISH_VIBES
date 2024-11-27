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
* \file         utils.c
*
* \brief        Definition of utility functions.
* \date         March 20th, 2020
* \author       _Centro "E.Piaggio"_
* \copyright    (C) 2012-2016 qbrobotics. All rights reserved.
* \copyright    (C) 2017-2020 Centro "E.Piaggio". All rights reserved.
*/

#include "utils.h"

//==============================================================================
//                                                            Current Estimation
//==============================================================================

int32 curr_estim ( uint8 idx, int32 pos, int32 vel, int32 ref ) {

    return 0;
}

//==============================================================================
//                                                                General filter
//==============================================================================
int32 filter(int32 new_value, struct st_filter *f) {

    int32 aux;

    aux = (f->old_value * (1024 - f->gain) + (new_value << 6) * (f->gain)) /1024;

    f->old_value = aux;

    return (aux / 64);
}

//==============================================================================
//                                                                        MODULE
//==============================================================================

uint32 my_mod(int32 val, int32 divisor) {

    if (val >= 0) {
        return (int32)(val % divisor);
    } else {
        return (int32)((divisor - (-val % divisor)) % divisor);
    }
}


//==============================================================================
//                                                                     CALIBRATE
//==============================================================================

void calibration(void) {
   
}


//==============================================================================
//                                                      DOUBLE ENCODER CALC TURN
//==============================================================================

// Use this matlab function to calculate I1 and I2
//
// function [inv_a, inv_b] = mod_mul_inv(a, b)
//     a = int32(a);
//     b = int32(b);
//     if b == 0
//         inv_a = 1;
//         inv_b = 0;
//         return
//     else
//         q = idivide(a,b,'floor');
//         r = mod(a,b);
//         [s, t] = mod_mul_inv(b, r);
//     end
//     inv_a = t;
//     inv_b = s - q * t;
// return

// Number of ticks per turn
#define M 65536          ///< Number of encoder ticks per turn.

int calc_turns_fcn_SH(const int32 pos1, const int32 pos2, const int N1, const int N2, const int I1) { 
     return 0; 

}

int calc_turns_fcn(const int32 pos1, const int32 pos2, const int N1, const int N2, const int I1) { 
return 0;
}

//==============================================================================
//                                                                 REST POSITION
//==============================================================================
void check_rest_position(void) {     // 100 Hz frequency.
   
}

//==============================================================================
//                                                                   LED CONTROL
//==============================================================================

void LED_control(uint8 mode) {
  
}


//==============================================================================
//                                                            BATTERY MANAGEMENT
//==============================================================================
void battery_management() {
  
}

//==============================================================================
//                                                         ADC SET CHANNELS USED
//==============================================================================
void ADC_Set_N_Channels() {
   
}

//==============================================================================
//                                                                  ENABLE MOTOR
//==============================================================================
void enable_motor(uint8 idx, uint8 val){
  
}



//==============================================================================
//                                                              RESET COUNTERS
//==============================================================================
void reset_counters() {
   }


//==============================================================================
//                                                                       INVSQRT
//==============================================================================
float invSqrt(float x) {

	return 0;
}

//==============================================================================
//                                                                  V3_NORMALIZE
//==============================================================================
void v3_normalize(float v3_in[3]){
   
}
 
//==============================================================================
//                                                                  V4_NORMALIZE
//==============================================================================
void v4_normalize(float v4_in[4]){
    
}

//==============================================================================
//                                                            UPDATE_EMG_HISTORY
//==============================================================================
void update_EMG_history(){
    
}

//==============================================================================
//                                                         SET MOTOR DRIVER TYPE
//==============================================================================
void set_motor_driver_type(){
    
}
/* [] END OF FILE */