/*******************************************************************************
* File Name: VT_1B.h  
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

#if !defined(CY_PINS_VT_1B_H) /* Pins VT_1B_H */
#define CY_PINS_VT_1B_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "VT_1B_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 VT_1B__PORT == 15 && ((VT_1B__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    VT_1B_Write(uint8 value);
void    VT_1B_SetDriveMode(uint8 mode);
uint8   VT_1B_ReadDataReg(void);
uint8   VT_1B_Read(void);
void    VT_1B_SetInterruptMode(uint16 position, uint16 mode);
uint8   VT_1B_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the VT_1B_SetDriveMode() function.
     *  @{
     */
        #define VT_1B_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define VT_1B_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define VT_1B_DM_RES_UP          PIN_DM_RES_UP
        #define VT_1B_DM_RES_DWN         PIN_DM_RES_DWN
        #define VT_1B_DM_OD_LO           PIN_DM_OD_LO
        #define VT_1B_DM_OD_HI           PIN_DM_OD_HI
        #define VT_1B_DM_STRONG          PIN_DM_STRONG
        #define VT_1B_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define VT_1B_MASK               VT_1B__MASK
#define VT_1B_SHIFT              VT_1B__SHIFT
#define VT_1B_WIDTH              1u

/* Interrupt constants */
#if defined(VT_1B__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in VT_1B_SetInterruptMode() function.
     *  @{
     */
        #define VT_1B_INTR_NONE      (uint16)(0x0000u)
        #define VT_1B_INTR_RISING    (uint16)(0x0001u)
        #define VT_1B_INTR_FALLING   (uint16)(0x0002u)
        #define VT_1B_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define VT_1B_INTR_MASK      (0x01u) 
#endif /* (VT_1B__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define VT_1B_PS                     (* (reg8 *) VT_1B__PS)
/* Data Register */
#define VT_1B_DR                     (* (reg8 *) VT_1B__DR)
/* Port Number */
#define VT_1B_PRT_NUM                (* (reg8 *) VT_1B__PRT) 
/* Connect to Analog Globals */                                                  
#define VT_1B_AG                     (* (reg8 *) VT_1B__AG)                       
/* Analog MUX bux enable */
#define VT_1B_AMUX                   (* (reg8 *) VT_1B__AMUX) 
/* Bidirectional Enable */                                                        
#define VT_1B_BIE                    (* (reg8 *) VT_1B__BIE)
/* Bit-mask for Aliased Register Access */
#define VT_1B_BIT_MASK               (* (reg8 *) VT_1B__BIT_MASK)
/* Bypass Enable */
#define VT_1B_BYP                    (* (reg8 *) VT_1B__BYP)
/* Port wide control signals */                                                   
#define VT_1B_CTL                    (* (reg8 *) VT_1B__CTL)
/* Drive Modes */
#define VT_1B_DM0                    (* (reg8 *) VT_1B__DM0) 
#define VT_1B_DM1                    (* (reg8 *) VT_1B__DM1)
#define VT_1B_DM2                    (* (reg8 *) VT_1B__DM2) 
/* Input Buffer Disable Override */
#define VT_1B_INP_DIS                (* (reg8 *) VT_1B__INP_DIS)
/* LCD Common or Segment Drive */
#define VT_1B_LCD_COM_SEG            (* (reg8 *) VT_1B__LCD_COM_SEG)
/* Enable Segment LCD */
#define VT_1B_LCD_EN                 (* (reg8 *) VT_1B__LCD_EN)
/* Slew Rate Control */
#define VT_1B_SLW                    (* (reg8 *) VT_1B__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define VT_1B_PRTDSI__CAPS_SEL       (* (reg8 *) VT_1B__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define VT_1B_PRTDSI__DBL_SYNC_IN    (* (reg8 *) VT_1B__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define VT_1B_PRTDSI__OE_SEL0        (* (reg8 *) VT_1B__PRTDSI__OE_SEL0) 
#define VT_1B_PRTDSI__OE_SEL1        (* (reg8 *) VT_1B__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define VT_1B_PRTDSI__OUT_SEL0       (* (reg8 *) VT_1B__PRTDSI__OUT_SEL0) 
#define VT_1B_PRTDSI__OUT_SEL1       (* (reg8 *) VT_1B__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define VT_1B_PRTDSI__SYNC_OUT       (* (reg8 *) VT_1B__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(VT_1B__SIO_CFG)
    #define VT_1B_SIO_HYST_EN        (* (reg8 *) VT_1B__SIO_HYST_EN)
    #define VT_1B_SIO_REG_HIFREQ     (* (reg8 *) VT_1B__SIO_REG_HIFREQ)
    #define VT_1B_SIO_CFG            (* (reg8 *) VT_1B__SIO_CFG)
    #define VT_1B_SIO_DIFF           (* (reg8 *) VT_1B__SIO_DIFF)
#endif /* (VT_1B__SIO_CFG) */

/* Interrupt Registers */
#if defined(VT_1B__INTSTAT)
    #define VT_1B_INTSTAT            (* (reg8 *) VT_1B__INTSTAT)
    #define VT_1B_SNAP               (* (reg8 *) VT_1B__SNAP)
    
	#define VT_1B_0_INTTYPE_REG 		(* (reg8 *) VT_1B__0__INTTYPE)
#endif /* (VT_1B__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_VT_1B_H */


/* [] END OF FILE */
