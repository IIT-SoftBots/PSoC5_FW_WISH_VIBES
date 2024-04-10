/*******************************************************************************
* File Name: MASTER_MODE_FLAG.h  
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

#if !defined(CY_PINS_MASTER_MODE_FLAG_H) /* Pins MASTER_MODE_FLAG_H */
#define CY_PINS_MASTER_MODE_FLAG_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "MASTER_MODE_FLAG_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 MASTER_MODE_FLAG__PORT == 15 && ((MASTER_MODE_FLAG__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    MASTER_MODE_FLAG_Write(uint8 value);
void    MASTER_MODE_FLAG_SetDriveMode(uint8 mode);
uint8   MASTER_MODE_FLAG_ReadDataReg(void);
uint8   MASTER_MODE_FLAG_Read(void);
void    MASTER_MODE_FLAG_SetInterruptMode(uint16 position, uint16 mode);
uint8   MASTER_MODE_FLAG_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the MASTER_MODE_FLAG_SetDriveMode() function.
     *  @{
     */
        #define MASTER_MODE_FLAG_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define MASTER_MODE_FLAG_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define MASTER_MODE_FLAG_DM_RES_UP          PIN_DM_RES_UP
        #define MASTER_MODE_FLAG_DM_RES_DWN         PIN_DM_RES_DWN
        #define MASTER_MODE_FLAG_DM_OD_LO           PIN_DM_OD_LO
        #define MASTER_MODE_FLAG_DM_OD_HI           PIN_DM_OD_HI
        #define MASTER_MODE_FLAG_DM_STRONG          PIN_DM_STRONG
        #define MASTER_MODE_FLAG_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define MASTER_MODE_FLAG_MASK               MASTER_MODE_FLAG__MASK
#define MASTER_MODE_FLAG_SHIFT              MASTER_MODE_FLAG__SHIFT
#define MASTER_MODE_FLAG_WIDTH              1u

/* Interrupt constants */
#if defined(MASTER_MODE_FLAG__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MASTER_MODE_FLAG_SetInterruptMode() function.
     *  @{
     */
        #define MASTER_MODE_FLAG_INTR_NONE      (uint16)(0x0000u)
        #define MASTER_MODE_FLAG_INTR_RISING    (uint16)(0x0001u)
        #define MASTER_MODE_FLAG_INTR_FALLING   (uint16)(0x0002u)
        #define MASTER_MODE_FLAG_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define MASTER_MODE_FLAG_INTR_MASK      (0x01u) 
#endif /* (MASTER_MODE_FLAG__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MASTER_MODE_FLAG_PS                     (* (reg8 *) MASTER_MODE_FLAG__PS)
/* Data Register */
#define MASTER_MODE_FLAG_DR                     (* (reg8 *) MASTER_MODE_FLAG__DR)
/* Port Number */
#define MASTER_MODE_FLAG_PRT_NUM                (* (reg8 *) MASTER_MODE_FLAG__PRT) 
/* Connect to Analog Globals */                                                  
#define MASTER_MODE_FLAG_AG                     (* (reg8 *) MASTER_MODE_FLAG__AG)                       
/* Analog MUX bux enable */
#define MASTER_MODE_FLAG_AMUX                   (* (reg8 *) MASTER_MODE_FLAG__AMUX) 
/* Bidirectional Enable */                                                        
#define MASTER_MODE_FLAG_BIE                    (* (reg8 *) MASTER_MODE_FLAG__BIE)
/* Bit-mask for Aliased Register Access */
#define MASTER_MODE_FLAG_BIT_MASK               (* (reg8 *) MASTER_MODE_FLAG__BIT_MASK)
/* Bypass Enable */
#define MASTER_MODE_FLAG_BYP                    (* (reg8 *) MASTER_MODE_FLAG__BYP)
/* Port wide control signals */                                                   
#define MASTER_MODE_FLAG_CTL                    (* (reg8 *) MASTER_MODE_FLAG__CTL)
/* Drive Modes */
#define MASTER_MODE_FLAG_DM0                    (* (reg8 *) MASTER_MODE_FLAG__DM0) 
#define MASTER_MODE_FLAG_DM1                    (* (reg8 *) MASTER_MODE_FLAG__DM1)
#define MASTER_MODE_FLAG_DM2                    (* (reg8 *) MASTER_MODE_FLAG__DM2) 
/* Input Buffer Disable Override */
#define MASTER_MODE_FLAG_INP_DIS                (* (reg8 *) MASTER_MODE_FLAG__INP_DIS)
/* LCD Common or Segment Drive */
#define MASTER_MODE_FLAG_LCD_COM_SEG            (* (reg8 *) MASTER_MODE_FLAG__LCD_COM_SEG)
/* Enable Segment LCD */
#define MASTER_MODE_FLAG_LCD_EN                 (* (reg8 *) MASTER_MODE_FLAG__LCD_EN)
/* Slew Rate Control */
#define MASTER_MODE_FLAG_SLW                    (* (reg8 *) MASTER_MODE_FLAG__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define MASTER_MODE_FLAG_PRTDSI__CAPS_SEL       (* (reg8 *) MASTER_MODE_FLAG__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define MASTER_MODE_FLAG_PRTDSI__DBL_SYNC_IN    (* (reg8 *) MASTER_MODE_FLAG__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define MASTER_MODE_FLAG_PRTDSI__OE_SEL0        (* (reg8 *) MASTER_MODE_FLAG__PRTDSI__OE_SEL0) 
#define MASTER_MODE_FLAG_PRTDSI__OE_SEL1        (* (reg8 *) MASTER_MODE_FLAG__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define MASTER_MODE_FLAG_PRTDSI__OUT_SEL0       (* (reg8 *) MASTER_MODE_FLAG__PRTDSI__OUT_SEL0) 
#define MASTER_MODE_FLAG_PRTDSI__OUT_SEL1       (* (reg8 *) MASTER_MODE_FLAG__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define MASTER_MODE_FLAG_PRTDSI__SYNC_OUT       (* (reg8 *) MASTER_MODE_FLAG__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(MASTER_MODE_FLAG__SIO_CFG)
    #define MASTER_MODE_FLAG_SIO_HYST_EN        (* (reg8 *) MASTER_MODE_FLAG__SIO_HYST_EN)
    #define MASTER_MODE_FLAG_SIO_REG_HIFREQ     (* (reg8 *) MASTER_MODE_FLAG__SIO_REG_HIFREQ)
    #define MASTER_MODE_FLAG_SIO_CFG            (* (reg8 *) MASTER_MODE_FLAG__SIO_CFG)
    #define MASTER_MODE_FLAG_SIO_DIFF           (* (reg8 *) MASTER_MODE_FLAG__SIO_DIFF)
#endif /* (MASTER_MODE_FLAG__SIO_CFG) */

/* Interrupt Registers */
#if defined(MASTER_MODE_FLAG__INTSTAT)
    #define MASTER_MODE_FLAG_INTSTAT            (* (reg8 *) MASTER_MODE_FLAG__INTSTAT)
    #define MASTER_MODE_FLAG_SNAP               (* (reg8 *) MASTER_MODE_FLAG__SNAP)
    
	#define MASTER_MODE_FLAG_0_INTTYPE_REG 		(* (reg8 *) MASTER_MODE_FLAG__0__INTTYPE)
#endif /* (MASTER_MODE_FLAG__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_MASTER_MODE_FLAG_H */


/* [] END OF FILE */
