/*******************************************************************************
* File Name: MOTOR_DIR_4_PM.c
* Version 1.80
*
* Description:
*  This file contains the setup, control, and status commands to support 
*  the component operation in the low power mode. 
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "MOTOR_DIR_4.h"

/* Check for removal by optimization */
#if !defined(MOTOR_DIR_4_Sync_ctrl_reg__REMOVED)

static MOTOR_DIR_4_BACKUP_STRUCT  MOTOR_DIR_4_backup = {0u};

    
/*******************************************************************************
* Function Name: MOTOR_DIR_4_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void MOTOR_DIR_4_SaveConfig(void) 
{
    MOTOR_DIR_4_backup.controlState = MOTOR_DIR_4_Control;
}


/*******************************************************************************
* Function Name: MOTOR_DIR_4_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*
*******************************************************************************/
void MOTOR_DIR_4_RestoreConfig(void) 
{
     MOTOR_DIR_4_Control = MOTOR_DIR_4_backup.controlState;
}


/*******************************************************************************
* Function Name: MOTOR_DIR_4_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component for entering the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void MOTOR_DIR_4_Sleep(void) 
{
    MOTOR_DIR_4_SaveConfig();
}


/*******************************************************************************
* Function Name: MOTOR_DIR_4_Wakeup
********************************************************************************
*
* Summary:
*  Restores the component after waking up from the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void MOTOR_DIR_4_Wakeup(void)  
{
    MOTOR_DIR_4_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
