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
#include "vibrotactile_control.h"
#include <project.h>
#include "globals.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "command_processing.h"
#include "utils.h"


/*******************************************************************************
* Function Name: memInitVibrotactile
*********************************************************************************/

void memInitVibrotactile(){
    flag_vibrotactile = 0;
    uint8 i, j;
           conta_1 =0;
    for(i = 0;i < NUM_OF_EXTERNAL_IMU; i++)
    {
        for (j = 0; j < 3; j++)
        {     
            accelerometer_matrix[i][j]=0;
            matrice_reco_mod[3*i+j]=0;
            acc_values_mod[i][j]=0;
            matrice_completa[3*i+j]=0;
            matrice_reco[3*i+j]=0;
            contatore[3*i+j]=0;
            vect_acc_old4[i][j] = 0;
            vect_acc_old3[i][j] = 0;
            vect_acc_old2[i][j] = 0;
            vect_acc_old[i][j] = 0;
            vect_acc_old4_filt[i][j] = 0;
            vect_acc_old3_filt[i][j] = 0;
            vect_acc_old2_filt[i][j] = 0;
            vect_acc_old_filt[i][j] = 0;
            vect_acc[i][j] = 0;
            vect_acc_filt[i][j] = 0; 
        }
        vect_acc_filt_sum[i] = 0; 
        input_act_old[i] = 0;
        massimo[i]=0;
        conta_finestra[i]=5;
        trovato[i]=0;
    }
}

/*******************************************************************************
* Function Name: Outliers Deletion
*********************************************************************************/

void OutliersDeletion(uint8 i){
   
    if (conta_1 < 2){	
		acc_values_mod[i][0] = accelerometer_matrix[i][0];
		acc_values_mod[i][1] = accelerometer_matrix[i][1];
		acc_values_mod[i][2] = accelerometer_matrix[i][2];

	}

	else {
        
		if (contatore[3*i+0] > 2)
		{
			acc_values_mod[i][0] = accelerometer_matrix[i][0];
			contatore[3*i+0] = 0;
		}
		else
		{              
            
			if ((fabs(accelerometer_matrix[i][0] - matrice_reco[3*i+0]) > SOGLIA )||( fabs(accelerometer_matrix[i][0] - matrice_reco[3*i+0]) < 0.000001))
			{
				acc_values_mod[i][0] = matrice_reco_mod[3*i+0];
				contatore[3*i+0] =contatore[3*i+0] + 1;
			}
			else if (fabs(accelerometer_matrix[i][0] - matrice_reco[3*i+0]) <= SOGLIA)
			{
				acc_values_mod[i][0] = accelerometer_matrix[i][0];
				contatore[3*i+0] = 0;
			}
		}

		if (contatore[3*i+1] > 2)
		{
			acc_values_mod[i][1] = accelerometer_matrix[i][1];
			contatore[3*i+1] = 0;
		}
		else
		{
			if (fabs(accelerometer_matrix[i][1] - matrice_reco[3 * i + 1]) > SOGLIA || fabs(accelerometer_matrix[i][1] - matrice_reco[3 * i + 1]) < 0.000001)
			{
				acc_values_mod[i][1] = matrice_reco_mod[3 * i + 1];
				contatore[3*i+1] += 1;
			}
			else if (fabs(accelerometer_matrix[i][1] - matrice_reco[3 * i + 1]) <= SOGLIA)
			{
				acc_values_mod[i][1] = accelerometer_matrix[i][1];
				contatore[3*i+1] = 0;
			}
		}

		if (contatore[3*i+2] > 2)
		{
			acc_values_mod[i][2] = accelerometer_matrix[i][2];
                

			contatore[3*i+2] = 0;
            
		}
		else
		{
			if (fabs(accelerometer_matrix[i][2] - matrice_reco[3 * i + 2]) > SOGLIA || fabs(accelerometer_matrix[i][2] - matrice_reco[3 * i + 2]) < 0.000001)
			{
				acc_values_mod[i][2] = matrice_reco_mod[3 * i + 2];
                    

				contatore[3*i+2] += 1;
			}
			else if (fabs(accelerometer_matrix[i][2] - matrice_reco[3 * i + 2]) <= SOGLIA)
			{
				acc_values_mod[i][2] = accelerometer_matrix[i][2];
                    

				contatore[3*i+2] = 0;
			}
		}
			}

			matrice_reco[3*i+0] = accelerometer_matrix[i][0];	
			matrice_reco[3*i+1] = accelerometer_matrix[i][1];
			matrice_reco[3*i+2] = accelerometer_matrix[i][2];

			matrice_reco_mod[3*i+0] = acc_values_mod[i][0];
			matrice_reco_mod[3*i+1] = acc_values_mod[i][1];
			matrice_reco_mod[3*i+2] = acc_values_mod[i][2];
       
}

/*******************************************************************************
* Function Name: Signal Filtering
*********************************************************************************/

void SignalFiltering(uint8 i){
    
    /*vect_filt[i][0] =acc_values_mod[i][0];
    vect_filt[i][1] =acc_values_mod[i][0];
    vect_filt[i][2] =acc_values_mod[i][0];
     */   
    vect_filt[i][0] = BandPassFilter(acc_values_mod[i][0], i, 0);
	vect_filt[i][1] = BandPassFilter(acc_values_mod[i][1], i, 1);
	vect_filt[i][2] = BandPassFilter(acc_values_mod[i][2], i, 2);
		   		
	matrice_completa[3*i+0] = vect_filt[i][0];
	matrice_completa[3*i+1] = vect_filt[i][1];
	matrice_completa[3*i+2] = vect_filt[i][2];
}

/*******************************************************************************
* Function Name: Single Axis Mapping
*********************************************************************************/

void SingleAxisMapping (uint8 i){
        
    vect_acc_filt_sum[i] = fabs(matrice_completa[3*i+0]) + fabs(matrice_completa[3*i+1]) + fabs(matrice_completa[3*i+2]);

}

/*******************************************************************************
* Function Name: Actuators input computation
*********************************************************************************/

void ActuatorsInputComputation (uint8 i){
   input_act_sent[i]= GeneratePWMValue(vect_acc_filt_sum[i]); //vect_acc_filt_sum -> NO STANDARD SCORE -- signal -> STANDARD SCORE    
}

/*******************************************************************************
* Function Name: BandPassFilter
*********************************************************************************/
float BandPassFilter(float new_value, int idx, int dir){

    vect_acc_old4[idx][dir] = vect_acc_old3[idx][dir];
    vect_acc_old3[idx][dir] = vect_acc_old2[idx][dir];
    vect_acc_old2[idx][dir] = vect_acc_old[idx][dir];
    vect_acc_old[idx][dir] = vect_acc[idx][dir];
    
    vect_acc_old4_filt[idx][dir] = vect_acc_old3_filt[idx][dir];
    vect_acc_old3_filt[idx][dir] = vect_acc_old2_filt[idx][dir];
    vect_acc_old2_filt[idx][dir] = vect_acc_old_filt[idx][dir];
    vect_acc_old_filt[idx][dir] = vect_acc_filt[idx][dir];
  
    vect_acc[idx][dir] = new_value;

    s1 = ( B_0 ) * ( vect_acc[idx][dir] );
    s2 = ( B1 ) * ( vect_acc_old[idx][dir] );
    s3 = ( B2 ) * ( vect_acc_old2[idx][dir] );
    s4 = ( B3 ) * ( vect_acc_old3[idx][dir] );
    s5 = ( B4 ) * ( vect_acc_old4[idx][dir] );
    s7 = ( A1 ) * ( vect_acc_old_filt[idx][dir] );
    s8 = ( A2 ) * ( vect_acc_old2_filt[idx][dir] );
    s9 = ( A3 ) * ( vect_acc_old3_filt[idx][dir] );
    s10 = ( A4 ) * ( vect_acc_old4_filt[idx][dir] );

    vect_acc_filt[idx][dir] = ( s1 + s2 + s3 + s4 + s5 -s7 -s8 -s9 - s10 ); 

    return (vect_acc_filt[idx][dir]); 
     
}

/*******************************************************************************
* Function Name: Generate PWM Value
*********************************************************************************/

int32 GeneratePWMValue(float acc_filt_sum){ 
    int32 pwm_hapt;
    pwm_hapt = (int32)(SCALA * acc_filt_sum );
    return pwm_hapt;
}


void driveVibrotactileFeedback(){
    uint8 i;

        for (i = 0; i < NUM_OF_EXTERNAL_IMU; i++) 
        {         
            OutliersDeletion(i);
            SignalFiltering(i);
            SingleAxisMapping(i);  
            ActuatorsInputComputation(i);
    
            if (input_act_sent[i] < 10)
                input_act_sent[i] = 0;
    
            g_refNew_vibrotactile[i].pwm = (int16)input_act_sent[i] ;

        }

          conta_1 = conta_1 + 1;        
  
}



/* [] END OF FILE */
