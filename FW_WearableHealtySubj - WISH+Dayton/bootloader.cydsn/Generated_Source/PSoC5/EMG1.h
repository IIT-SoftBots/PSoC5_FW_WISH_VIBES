/*******************************************************************************
* File Name: EMG1.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_EMG1_H) /* Pins EMG1_H */
#define CY_PINS_EMG1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "EMG1_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_90 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 EMG1__PORT == 15 && ((EMG1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    EMG1_Write(uint8 value) ;
void    EMG1_SetDriveMode(uint8 mode) ;
uint8   EMG1_ReadDataReg(void) ;
uint8   EMG1_Read(void) ;
uint8   EMG1_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define EMG1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define EMG1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define EMG1_DM_RES_UP          PIN_DM_RES_UP
#define EMG1_DM_RES_DWN         PIN_DM_RES_DWN
#define EMG1_DM_OD_LO           PIN_DM_OD_LO
#define EMG1_DM_OD_HI           PIN_DM_OD_HI
#define EMG1_DM_STRONG          PIN_DM_STRONG
#define EMG1_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define EMG1_MASK               EMG1__MASK
#define EMG1_SHIFT              EMG1__SHIFT
#define EMG1_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define EMG1_PS                     (* (reg8 *) EMG1__PS)
/* Data Register */
#define EMG1_DR                     (* (reg8 *) EMG1__DR)
/* Port Number */
#define EMG1_PRT_NUM                (* (reg8 *) EMG1__PRT) 
/* Connect to Analog Globals */                                                  
#define EMG1_AG                     (* (reg8 *) EMG1__AG)                       
/* Analog MUX bux enable */
#define EMG1_AMUX                   (* (reg8 *) EMG1__AMUX) 
/* Bidirectional Enable */                                                        
#define EMG1_BIE                    (* (reg8 *) EMG1__BIE)
/* Bit-mask for Aliased Register Access */
#define EMG1_BIT_MASK               (* (reg8 *) EMG1__BIT_MASK)
/* Bypass Enable */
#define EMG1_BYP                    (* (reg8 *) EMG1__BYP)
/* Port wide control signals */                                                   
#define EMG1_CTL                    (* (reg8 *) EMG1__CTL)
/* Drive Modes */
#define EMG1_DM0                    (* (reg8 *) EMG1__DM0) 
#define EMG1_DM1                    (* (reg8 *) EMG1__DM1)
#define EMG1_DM2                    (* (reg8 *) EMG1__DM2) 
/* Input Buffer Disable Override */
#define EMG1_INP_DIS                (* (reg8 *) EMG1__INP_DIS)
/* LCD Common or Segment Drive */
#define EMG1_LCD_COM_SEG            (* (reg8 *) EMG1__LCD_COM_SEG)
/* Enable Segment LCD */
#define EMG1_LCD_EN                 (* (reg8 *) EMG1__LCD_EN)
/* Slew Rate Control */
#define EMG1_SLW                    (* (reg8 *) EMG1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define EMG1_PRTDSI__CAPS_SEL       (* (reg8 *) EMG1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define EMG1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) EMG1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define EMG1_PRTDSI__OE_SEL0        (* (reg8 *) EMG1__PRTDSI__OE_SEL0) 
#define EMG1_PRTDSI__OE_SEL1        (* (reg8 *) EMG1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define EMG1_PRTDSI__OUT_SEL0       (* (reg8 *) EMG1__PRTDSI__OUT_SEL0) 
#define EMG1_PRTDSI__OUT_SEL1       (* (reg8 *) EMG1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define EMG1_PRTDSI__SYNC_OUT       (* (reg8 *) EMG1__PRTDSI__SYNC_OUT) 


#if defined(EMG1__INTSTAT)  /* Interrupt Registers */

    #define EMG1_INTSTAT                (* (reg8 *) EMG1__INTSTAT)
    #define EMG1_SNAP                   (* (reg8 *) EMG1__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_EMG1_H */


/* [] END OF FILE */
