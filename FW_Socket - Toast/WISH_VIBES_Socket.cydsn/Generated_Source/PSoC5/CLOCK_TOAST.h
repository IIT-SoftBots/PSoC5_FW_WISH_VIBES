/*******************************************************************************
* File Name: CLOCK_TOAST.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_CLOCK_TOAST_H)
#define CY_CLOCK_CLOCK_TOAST_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void CLOCK_TOAST_Start(void) ;
void CLOCK_TOAST_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void CLOCK_TOAST_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void CLOCK_TOAST_StandbyPower(uint8 state) ;
void CLOCK_TOAST_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 CLOCK_TOAST_GetDividerRegister(void) ;
void CLOCK_TOAST_SetModeRegister(uint8 modeBitMask) ;
void CLOCK_TOAST_ClearModeRegister(uint8 modeBitMask) ;
uint8 CLOCK_TOAST_GetModeRegister(void) ;
void CLOCK_TOAST_SetSourceRegister(uint8 clkSource) ;
uint8 CLOCK_TOAST_GetSourceRegister(void) ;
#if defined(CLOCK_TOAST__CFG3)
void CLOCK_TOAST_SetPhaseRegister(uint8 clkPhase) ;
uint8 CLOCK_TOAST_GetPhaseRegister(void) ;
#endif /* defined(CLOCK_TOAST__CFG3) */

#define CLOCK_TOAST_Enable()                       CLOCK_TOAST_Start()
#define CLOCK_TOAST_Disable()                      CLOCK_TOAST_Stop()
#define CLOCK_TOAST_SetDivider(clkDivider)         CLOCK_TOAST_SetDividerRegister(clkDivider, 1u)
#define CLOCK_TOAST_SetDividerValue(clkDivider)    CLOCK_TOAST_SetDividerRegister((clkDivider) - 1u, 1u)
#define CLOCK_TOAST_SetMode(clkMode)               CLOCK_TOAST_SetModeRegister(clkMode)
#define CLOCK_TOAST_SetSource(clkSource)           CLOCK_TOAST_SetSourceRegister(clkSource)
#if defined(CLOCK_TOAST__CFG3)
#define CLOCK_TOAST_SetPhase(clkPhase)             CLOCK_TOAST_SetPhaseRegister(clkPhase)
#define CLOCK_TOAST_SetPhaseValue(clkPhase)        CLOCK_TOAST_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(CLOCK_TOAST__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define CLOCK_TOAST_CLKEN              (* (reg8 *) CLOCK_TOAST__PM_ACT_CFG)
#define CLOCK_TOAST_CLKEN_PTR          ((reg8 *) CLOCK_TOAST__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define CLOCK_TOAST_CLKSTBY            (* (reg8 *) CLOCK_TOAST__PM_STBY_CFG)
#define CLOCK_TOAST_CLKSTBY_PTR        ((reg8 *) CLOCK_TOAST__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define CLOCK_TOAST_DIV_LSB            (* (reg8 *) CLOCK_TOAST__CFG0)
#define CLOCK_TOAST_DIV_LSB_PTR        ((reg8 *) CLOCK_TOAST__CFG0)
#define CLOCK_TOAST_DIV_PTR            ((reg16 *) CLOCK_TOAST__CFG0)

/* Clock MSB divider configuration register. */
#define CLOCK_TOAST_DIV_MSB            (* (reg8 *) CLOCK_TOAST__CFG1)
#define CLOCK_TOAST_DIV_MSB_PTR        ((reg8 *) CLOCK_TOAST__CFG1)

/* Mode and source configuration register */
#define CLOCK_TOAST_MOD_SRC            (* (reg8 *) CLOCK_TOAST__CFG2)
#define CLOCK_TOAST_MOD_SRC_PTR        ((reg8 *) CLOCK_TOAST__CFG2)

#if defined(CLOCK_TOAST__CFG3)
/* Analog clock phase configuration register */
#define CLOCK_TOAST_PHASE              (* (reg8 *) CLOCK_TOAST__CFG3)
#define CLOCK_TOAST_PHASE_PTR          ((reg8 *) CLOCK_TOAST__CFG3)
#endif /* defined(CLOCK_TOAST__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define CLOCK_TOAST_CLKEN_MASK         CLOCK_TOAST__PM_ACT_MSK
#define CLOCK_TOAST_CLKSTBY_MASK       CLOCK_TOAST__PM_STBY_MSK

/* CFG2 field masks */
#define CLOCK_TOAST_SRC_SEL_MSK        CLOCK_TOAST__CFG2_SRC_SEL_MASK
#define CLOCK_TOAST_MODE_MASK          (~(CLOCK_TOAST_SRC_SEL_MSK))

#if defined(CLOCK_TOAST__CFG3)
/* CFG3 phase mask */
#define CLOCK_TOAST_PHASE_MASK         CLOCK_TOAST__CFG3_PHASE_DLY_MASK
#endif /* defined(CLOCK_TOAST__CFG3) */

#endif /* CY_CLOCK_CLOCK_TOAST_H */


/* [] END OF FILE */
