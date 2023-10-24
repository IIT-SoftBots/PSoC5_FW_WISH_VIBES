/*******************************************************************************
* File Name: VT_1A.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_VT_1A_H) /* Pins VT_1A_H */
#define CY_PINS_VT_1A_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "VT_1A_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 VT_1A__PORT == 15 && ((VT_1A__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    VT_1A_Write(uint8 value);
void    VT_1A_SetDriveMode(uint8 mode);
uint8   VT_1A_ReadDataReg(void);
uint8   VT_1A_Read(void);
void    VT_1A_SetInterruptMode(uint16 position, uint16 mode);
uint8   VT_1A_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the VT_1A_SetDriveMode() function.
     *  @{
     */
        #define VT_1A_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define VT_1A_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define VT_1A_DM_RES_UP          PIN_DM_RES_UP
        #define VT_1A_DM_RES_DWN         PIN_DM_RES_DWN
        #define VT_1A_DM_OD_LO           PIN_DM_OD_LO
        #define VT_1A_DM_OD_HI           PIN_DM_OD_HI
        #define VT_1A_DM_STRONG          PIN_DM_STRONG
        #define VT_1A_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define VT_1A_MASK               VT_1A__MASK
#define VT_1A_SHIFT              VT_1A__SHIFT
#define VT_1A_WIDTH              1u

/* Interrupt constants */
#if defined(VT_1A__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in VT_1A_SetInterruptMode() function.
     *  @{
     */
        #define VT_1A_INTR_NONE      (uint16)(0x0000u)
        #define VT_1A_INTR_RISING    (uint16)(0x0001u)
        #define VT_1A_INTR_FALLING   (uint16)(0x0002u)
        #define VT_1A_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define VT_1A_INTR_MASK      (0x01u) 
#endif /* (VT_1A__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define VT_1A_PS                     (* (reg8 *) VT_1A__PS)
/* Data Register */
#define VT_1A_DR                     (* (reg8 *) VT_1A__DR)
/* Port Number */
#define VT_1A_PRT_NUM                (* (reg8 *) VT_1A__PRT) 
/* Connect to Analog Globals */                                                  
#define VT_1A_AG                     (* (reg8 *) VT_1A__AG)                       
/* Analog MUX bux enable */
#define VT_1A_AMUX                   (* (reg8 *) VT_1A__AMUX) 
/* Bidirectional Enable */                                                        
#define VT_1A_BIE                    (* (reg8 *) VT_1A__BIE)
/* Bit-mask for Aliased Register Access */
#define VT_1A_BIT_MASK               (* (reg8 *) VT_1A__BIT_MASK)
/* Bypass Enable */
#define VT_1A_BYP                    (* (reg8 *) VT_1A__BYP)
/* Port wide control signals */                                                   
#define VT_1A_CTL                    (* (reg8 *) VT_1A__CTL)
/* Drive Modes */
#define VT_1A_DM0                    (* (reg8 *) VT_1A__DM0) 
#define VT_1A_DM1                    (* (reg8 *) VT_1A__DM1)
#define VT_1A_DM2                    (* (reg8 *) VT_1A__DM2) 
/* Input Buffer Disable Override */
#define VT_1A_INP_DIS                (* (reg8 *) VT_1A__INP_DIS)
/* LCD Common or Segment Drive */
#define VT_1A_LCD_COM_SEG            (* (reg8 *) VT_1A__LCD_COM_SEG)
/* Enable Segment LCD */
#define VT_1A_LCD_EN                 (* (reg8 *) VT_1A__LCD_EN)
/* Slew Rate Control */
#define VT_1A_SLW                    (* (reg8 *) VT_1A__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define VT_1A_PRTDSI__CAPS_SEL       (* (reg8 *) VT_1A__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define VT_1A_PRTDSI__DBL_SYNC_IN    (* (reg8 *) VT_1A__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define VT_1A_PRTDSI__OE_SEL0        (* (reg8 *) VT_1A__PRTDSI__OE_SEL0) 
#define VT_1A_PRTDSI__OE_SEL1        (* (reg8 *) VT_1A__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define VT_1A_PRTDSI__OUT_SEL0       (* (reg8 *) VT_1A__PRTDSI__OUT_SEL0) 
#define VT_1A_PRTDSI__OUT_SEL1       (* (reg8 *) VT_1A__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define VT_1A_PRTDSI__SYNC_OUT       (* (reg8 *) VT_1A__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(VT_1A__SIO_CFG)
    #define VT_1A_SIO_HYST_EN        (* (reg8 *) VT_1A__SIO_HYST_EN)
    #define VT_1A_SIO_REG_HIFREQ     (* (reg8 *) VT_1A__SIO_REG_HIFREQ)
    #define VT_1A_SIO_CFG            (* (reg8 *) VT_1A__SIO_CFG)
    #define VT_1A_SIO_DIFF           (* (reg8 *) VT_1A__SIO_DIFF)
#endif /* (VT_1A__SIO_CFG) */

/* Interrupt Registers */
#if defined(VT_1A__INTSTAT)
    #define VT_1A_INTSTAT            (* (reg8 *) VT_1A__INTSTAT)
    #define VT_1A_SNAP               (* (reg8 *) VT_1A__SNAP)
    
	#define VT_1A_0_INTTYPE_REG 		(* (reg8 *) VT_1A__0__INTTYPE)
#endif /* (VT_1A__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_VT_1A_H */


/* [] END OF FILE */
