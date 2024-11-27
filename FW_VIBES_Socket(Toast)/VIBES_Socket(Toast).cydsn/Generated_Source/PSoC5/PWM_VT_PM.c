/*******************************************************************************
* File Name: PWM_VT_PM.c
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

#include "PWM_VT.h"

static PWM_VT_backupStruct PWM_VT_backup;


/*******************************************************************************
* Function Name: PWM_VT_SaveConfig
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
*  PWM_VT_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void PWM_VT_SaveConfig(void) 
{

    #if(!PWM_VT_UsingFixedFunction)
        #if(!PWM_VT_PWMModeIsCenterAligned)
            PWM_VT_backup.PWMPeriod = PWM_VT_ReadPeriod();
        #endif /* (!PWM_VT_PWMModeIsCenterAligned) */
        PWM_VT_backup.PWMUdb = PWM_VT_ReadCounter();
        #if (PWM_VT_UseStatus)
            PWM_VT_backup.InterruptMaskValue = PWM_VT_STATUS_MASK;
        #endif /* (PWM_VT_UseStatus) */

        #if(PWM_VT_DeadBandMode == PWM_VT__B_PWM__DBM_256_CLOCKS || \
            PWM_VT_DeadBandMode == PWM_VT__B_PWM__DBM_2_4_CLOCKS)
            PWM_VT_backup.PWMdeadBandValue = PWM_VT_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(PWM_VT_KillModeMinTime)
             PWM_VT_backup.PWMKillCounterPeriod = PWM_VT_ReadKillTime();
        #endif /* (PWM_VT_KillModeMinTime) */

        #if(PWM_VT_UseControl)
            PWM_VT_backup.PWMControlRegister = PWM_VT_ReadControlRegister();
        #endif /* (PWM_VT_UseControl) */
    #endif  /* (!PWM_VT_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: PWM_VT_RestoreConfig
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
*  PWM_VT_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_VT_RestoreConfig(void) 
{
        #if(!PWM_VT_UsingFixedFunction)
            #if(!PWM_VT_PWMModeIsCenterAligned)
                PWM_VT_WritePeriod(PWM_VT_backup.PWMPeriod);
            #endif /* (!PWM_VT_PWMModeIsCenterAligned) */

            PWM_VT_WriteCounter(PWM_VT_backup.PWMUdb);

            #if (PWM_VT_UseStatus)
                PWM_VT_STATUS_MASK = PWM_VT_backup.InterruptMaskValue;
            #endif /* (PWM_VT_UseStatus) */

            #if(PWM_VT_DeadBandMode == PWM_VT__B_PWM__DBM_256_CLOCKS || \
                PWM_VT_DeadBandMode == PWM_VT__B_PWM__DBM_2_4_CLOCKS)
                PWM_VT_WriteDeadTime(PWM_VT_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(PWM_VT_KillModeMinTime)
                PWM_VT_WriteKillTime(PWM_VT_backup.PWMKillCounterPeriod);
            #endif /* (PWM_VT_KillModeMinTime) */

            #if(PWM_VT_UseControl)
                PWM_VT_WriteControlRegister(PWM_VT_backup.PWMControlRegister);
            #endif /* (PWM_VT_UseControl) */
        #endif  /* (!PWM_VT_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: PWM_VT_Sleep
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
*  PWM_VT_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void PWM_VT_Sleep(void) 
{
    #if(PWM_VT_UseControl)
        if(PWM_VT_CTRL_ENABLE == (PWM_VT_CONTROL & PWM_VT_CTRL_ENABLE))
        {
            /*Component is enabled */
            PWM_VT_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            PWM_VT_backup.PWMEnableState = 0u;
        }
    #endif /* (PWM_VT_UseControl) */

    /* Stop component */
    PWM_VT_Stop();

    /* Save registers configuration */
    PWM_VT_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_VT_Wakeup
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
*  PWM_VT_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_VT_Wakeup(void) 
{
     /* Restore registers values */
    PWM_VT_RestoreConfig();

    if(PWM_VT_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        PWM_VT_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
