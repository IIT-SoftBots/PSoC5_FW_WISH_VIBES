/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include <project.h>
#include "globals.h"
#include "utils.h"

// macro for imu signal processing
#define SOGLIA_PARAM            0.9     // Define for vibrotactile algorithm
#define SOGLIA                  0.04    // Define for vibrotactile algorithm

#define SHIFT                   0
#define SCALA                   30
#define PWM_MAX_VALUE_DC        100

// function declaration 

void SingleAxisMapping (uint8 i);
void OutliersDeletion(uint8 i);
void SignalFiltering(uint8 i);
void ActuatorsInputComputation(uint8 i);
float BandPassFilter(float new_value, int idx, int dir);
int32 GeneratePWMValue(float acc_filt_sum);
void HaptuatorControl(uint8 n_hamp);
void driveVibrotactileFeedback();
void memInitVibrotactile();
/* [] END OF FILE */
