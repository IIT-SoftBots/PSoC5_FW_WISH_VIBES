/*******************************************************************************
* File Name: TOAST2_DIR_PM.c
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

#include "TOAST2_DIR.h"

/* Check for removal by optimization */
#if !defined(TOAST2_DIR_Sync_ctrl_reg__REMOVED)

static TOAST2_DIR_BACKUP_STRUCT  TOAST2_DIR_backup = {0u};

    
/*******************************************************************************
* Function Name: TOAST2_DIR_SaveConfig
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
void TOAST2_DIR_SaveConfig(void) 
{
    TOAST2_DIR_backup.controlState = TOAST2_DIR_Control;
}


/*******************************************************************************
* Function Name: TOAST2_DIR_RestoreConfig
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
void TOAST2_DIR_RestoreConfig(void) 
{
     TOAST2_DIR_Control = TOAST2_DIR_backup.controlState;
}


/*******************************************************************************
* Function Name: TOAST2_DIR_Sleep
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
void TOAST2_DIR_Sleep(void) 
{
    TOAST2_DIR_SaveConfig();
}


/*******************************************************************************
* Function Name: TOAST2_DIR_Wakeup
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
void TOAST2_DIR_Wakeup(void)  
{
    TOAST2_DIR_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */