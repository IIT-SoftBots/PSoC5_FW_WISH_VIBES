/*******************************************************************************
* File Name: PWM_PUMP_PM.c
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

#include "PWM_PUMP.h"

static PWM_PUMP_backupStruct PWM_PUMP_backup;


/*******************************************************************************
* Function Name: PWM_PUMP_SaveConfig
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
*  PWM_PUMP_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void PWM_PUMP_SaveConfig(void) 
{

    #if(!PWM_PUMP_UsingFixedFunction)
        #if(!PWM_PUMP_PWMModeIsCenterAligned)
            PWM_PUMP_backup.PWMPeriod = PWM_PUMP_ReadPeriod();
        #endif /* (!PWM_PUMP_PWMModeIsCenterAligned) */
        PWM_PUMP_backup.PWMUdb = PWM_PUMP_ReadCounter();
        #if (PWM_PUMP_UseStatus)
            PWM_PUMP_backup.InterruptMaskValue = PWM_PUMP_STATUS_MASK;
        #endif /* (PWM_PUMP_UseStatus) */

        #if(PWM_PUMP_DeadBandMode == PWM_PUMP__B_PWM__DBM_256_CLOCKS || \
            PWM_PUMP_DeadBandMode == PWM_PUMP__B_PWM__DBM_2_4_CLOCKS)
            PWM_PUMP_backup.PWMdeadBandValue = PWM_PUMP_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(PWM_PUMP_KillModeMinTime)
             PWM_PUMP_backup.PWMKillCounterPeriod = PWM_PUMP_ReadKillTime();
        #endif /* (PWM_PUMP_KillModeMinTime) */

        #if(PWM_PUMP_UseControl)
            PWM_PUMP_backup.PWMControlRegister = PWM_PUMP_ReadControlRegister();
        #endif /* (PWM_PUMP_UseControl) */
    #endif  /* (!PWM_PUMP_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: PWM_PUMP_RestoreConfig
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
*  PWM_PUMP_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_PUMP_RestoreConfig(void) 
{
        #if(!PWM_PUMP_UsingFixedFunction)
            #if(!PWM_PUMP_PWMModeIsCenterAligned)
                PWM_PUMP_WritePeriod(PWM_PUMP_backup.PWMPeriod);
            #endif /* (!PWM_PUMP_PWMModeIsCenterAligned) */

            PWM_PUMP_WriteCounter(PWM_PUMP_backup.PWMUdb);

            #if (PWM_PUMP_UseStatus)
                PWM_PUMP_STATUS_MASK = PWM_PUMP_backup.InterruptMaskValue;
            #endif /* (PWM_PUMP_UseStatus) */

            #if(PWM_PUMP_DeadBandMode == PWM_PUMP__B_PWM__DBM_256_CLOCKS || \
                PWM_PUMP_DeadBandMode == PWM_PUMP__B_PWM__DBM_2_4_CLOCKS)
                PWM_PUMP_WriteDeadTime(PWM_PUMP_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(PWM_PUMP_KillModeMinTime)
                PWM_PUMP_WriteKillTime(PWM_PUMP_backup.PWMKillCounterPeriod);
            #endif /* (PWM_PUMP_KillModeMinTime) */

            #if(PWM_PUMP_UseControl)
                PWM_PUMP_WriteControlRegister(PWM_PUMP_backup.PWMControlRegister);
            #endif /* (PWM_PUMP_UseControl) */
        #endif  /* (!PWM_PUMP_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: PWM_PUMP_Sleep
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
*  PWM_PUMP_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void PWM_PUMP_Sleep(void) 
{
    #if(PWM_PUMP_UseControl)
        if(PWM_PUMP_CTRL_ENABLE == (PWM_PUMP_CONTROL & PWM_PUMP_CTRL_ENABLE))
        {
            /*Component is enabled */
            PWM_PUMP_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            PWM_PUMP_backup.PWMEnableState = 0u;
        }
    #endif /* (PWM_PUMP_UseControl) */

    /* Stop component */
    PWM_PUMP_Stop();

    /* Save registers configuration */
    PWM_PUMP_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_PUMP_Wakeup
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
*  PWM_PUMP_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_PUMP_Wakeup(void) 
{
     /* Restore registers values */
    PWM_PUMP_RestoreConfig();

    if(PWM_PUMP_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        PWM_PUMP_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
