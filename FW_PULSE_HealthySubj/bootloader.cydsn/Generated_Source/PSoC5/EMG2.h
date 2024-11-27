/*******************************************************************************
* File Name: EMG2.h  
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

#if !defined(CY_PINS_EMG2_H) /* Pins EMG2_H */
#define CY_PINS_EMG2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "EMG2_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_90 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 EMG2__PORT == 15 && ((EMG2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    EMG2_Write(uint8 value) ;
void    EMG2_SetDriveMode(uint8 mode) ;
uint8   EMG2_ReadDataReg(void) ;
uint8   EMG2_Read(void) ;
uint8   EMG2_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define EMG2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define EMG2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define EMG2_DM_RES_UP          PIN_DM_RES_UP
#define EMG2_DM_RES_DWN         PIN_DM_RES_DWN
#define EMG2_DM_OD_LO           PIN_DM_OD_LO
#define EMG2_DM_OD_HI           PIN_DM_OD_HI
#define EMG2_DM_STRONG          PIN_DM_STRONG
#define EMG2_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define EMG2_MASK               EMG2__MASK
#define EMG2_SHIFT              EMG2__SHIFT
#define EMG2_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define EMG2_PS                     (* (reg8 *) EMG2__PS)
/* Data Register */
#define EMG2_DR                     (* (reg8 *) EMG2__DR)
/* Port Number */
#define EMG2_PRT_NUM                (* (reg8 *) EMG2__PRT) 
/* Connect to Analog Globals */                                                  
#define EMG2_AG                     (* (reg8 *) EMG2__AG)                       
/* Analog MUX bux enable */
#define EMG2_AMUX                   (* (reg8 *) EMG2__AMUX) 
/* Bidirectional Enable */                                                        
#define EMG2_BIE                    (* (reg8 *) EMG2__BIE)
/* Bit-mask for Aliased Register Access */
#define EMG2_BIT_MASK               (* (reg8 *) EMG2__BIT_MASK)
/* Bypass Enable */
#define EMG2_BYP                    (* (reg8 *) EMG2__BYP)
/* Port wide control signals */                                                   
#define EMG2_CTL                    (* (reg8 *) EMG2__CTL)
/* Drive Modes */
#define EMG2_DM0                    (* (reg8 *) EMG2__DM0) 
#define EMG2_DM1                    (* (reg8 *) EMG2__DM1)
#define EMG2_DM2                    (* (reg8 *) EMG2__DM2) 
/* Input Buffer Disable Override */
#define EMG2_INP_DIS                (* (reg8 *) EMG2__INP_DIS)
/* LCD Common or Segment Drive */
#define EMG2_LCD_COM_SEG            (* (reg8 *) EMG2__LCD_COM_SEG)
/* Enable Segment LCD */
#define EMG2_LCD_EN                 (* (reg8 *) EMG2__LCD_EN)
/* Slew Rate Control */
#define EMG2_SLW                    (* (reg8 *) EMG2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define EMG2_PRTDSI__CAPS_SEL       (* (reg8 *) EMG2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define EMG2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) EMG2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define EMG2_PRTDSI__OE_SEL0        (* (reg8 *) EMG2__PRTDSI__OE_SEL0) 
#define EMG2_PRTDSI__OE_SEL1        (* (reg8 *) EMG2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define EMG2_PRTDSI__OUT_SEL0       (* (reg8 *) EMG2__PRTDSI__OUT_SEL0) 
#define EMG2_PRTDSI__OUT_SEL1       (* (reg8 *) EMG2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define EMG2_PRTDSI__SYNC_OUT       (* (reg8 *) EMG2__PRTDSI__SYNC_OUT) 


#if defined(EMG2__INTSTAT)  /* Interrupt Registers */

    #define EMG2_INTSTAT                (* (reg8 *) EMG2__INTSTAT)
    #define EMG2_SNAP                   (* (reg8 *) EMG2__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_EMG2_H */


/* [] END OF FILE */
