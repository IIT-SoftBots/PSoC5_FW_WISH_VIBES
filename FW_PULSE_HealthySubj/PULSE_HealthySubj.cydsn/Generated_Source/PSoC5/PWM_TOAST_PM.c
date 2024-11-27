/*******************************************************************************
* File Name: PWM_TOAST_PM.c
* Version 3.30
*
* Description:
*  This file provides the power management source code to API for the
*  PWM.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "PWM_TOAST.h"

static PWM_TOAST_backupStruct PWM_TOAST_backup;


/*******************************************************************************
* Function Name: PWM_TOAST_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_TOAST_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void PWM_TOAST_SaveConfig(void) 
{

    #if(!PWM_TOAST_UsingFixedFunction)
        #if(!PWM_TOAST_PWMModeIsCenterAligned)
            PWM_TOAST_backup.PWMPeriod = PWM_TOAST_ReadPeriod();
        #endif /* (!PWM_TOAST_PWMModeIsCenterAligned) */
        PWM_TOAST_backup.PWMUdb = PWM_TOAST_ReadCounter();
        #if (PWM_TOAST_UseStatus)
            PWM_TOAST_backup.InterruptMaskValue = PWM_TOAST_STATUS_MASK;
        #endif /* (PWM_TOAST_UseStatus) */

        #if(PWM_TOAST_DeadBandMode == PWM_TOAST__B_PWM__DBM_256_CLOCKS || \
            PWM_TOAST_DeadBandMode == PWM_TOAST__B_PWM__DBM_2_4_CLOCKS)
            PWM_TOAST_backup.PWMdeadBandValue = PWM_TOAST_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(PWM_TOAST_KillModeMinTime)
             PWM_TOAST_backup.PWMKillCounterPeriod = PWM_TOAST_ReadKillTime();
        #endif /* (PWM_TOAST_KillModeMinTime) */

        #if(PWM_TOAST_UseControl)
            PWM_TOAST_backup.PWMControlRegister = PWM_TOAST_ReadControlRegister();
        #endif /* (PWM_TOAST_UseControl) */
    #endif  /* (!PWM_TOAST_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: PWM_TOAST_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_TOAST_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_TOAST_RestoreConfig(void) 
{
        #if(!PWM_TOAST_UsingFixedFunction)
            #if(!PWM_TOAST_PWMModeIsCenterAligned)
                PWM_TOAST_WritePeriod(PWM_TOAST_backup.PWMPeriod);
            #endif /* (!PWM_TOAST_PWMModeIsCenterAligned) */

            PWM_TOAST_WriteCounter(PWM_TOAST_backup.PWMUdb);

            #if (PWM_TOAST_UseStatus)
                PWM_TOAST_STATUS_MASK = PWM_TOAST_backup.InterruptMaskValue;
            #endif /* (PWM_TOAST_UseStatus) */

            #if(PWM_TOAST_DeadBandMode == PWM_TOAST__B_PWM__DBM_256_CLOCKS || \
                PWM_TOAST_DeadBandMode == PWM_TOAST__B_PWM__DBM_2_4_CLOCKS)
                PWM_TOAST_WriteDeadTime(PWM_TOAST_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(PWM_TOAST_KillModeMinTime)
                PWM_TOAST_WriteKillTime(PWM_TOAST_backup.PWMKillCounterPeriod);
            #endif /* (PWM_TOAST_KillModeMinTime) */

            #if(PWM_TOAST_UseControl)
                PWM_TOAST_WriteControlRegister(PWM_TOAST_backup.PWMControlRegister);
            #endif /* (PWM_TOAST_UseControl) */
        #endif  /* (!PWM_TOAST_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: PWM_TOAST_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves the user configuration. Should be called
*  just prior to entering sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_TOAST_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void PWM_TOAST_Sleep(void) 
{
    #if(PWM_TOAST_UseControl)
        if(PWM_TOAST_CTRL_ENABLE == (PWM_TOAST_CONTROL & PWM_TOAST_CTRL_ENABLE))
        {
            /*Component is enabled */
            PWM_TOAST_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            PWM_TOAST_backup.PWMEnableState = 0u;
        }
    #endif /* (PWM_TOAST_UseControl) */

    /* Stop component */
    PWM_TOAST_Stop();

    /* Save registers configuration */
    PWM_TOAST_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_TOAST_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration. Should be called just after
*  awaking from sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_TOAST_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_TOAST_Wakeup(void) 
{
     /* Restore registers values */
    PWM_TOAST_RestoreConfig();

    if(PWM_TOAST_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        PWM_TOAST_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
