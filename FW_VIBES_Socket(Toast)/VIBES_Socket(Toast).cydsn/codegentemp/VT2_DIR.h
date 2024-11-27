/*******************************************************************************
* File Name: VT2_DIR.h  
* Version 1.80
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CONTROL_REG_VT2_DIR_H) /* CY_CONTROL_REG_VT2_DIR_H */
#define CY_CONTROL_REG_VT2_DIR_H

#include "cyfitter.h"

#if ((CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC3) || \
     (CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC4) || \
     (CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC5))
    #include "cytypes.h"
#else
    #include "syslib/cy_syslib.h"
#endif

    
/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 controlState;

} VT2_DIR_BACKUP_STRUCT;


/***************************************
*         Function Prototypes 
***************************************/

void    VT2_DIR_Write(uint8 control) ;
uint8   VT2_DIR_Read(void) ;

void VT2_DIR_SaveConfig(void) ;
void VT2_DIR_RestoreConfig(void) ;
void VT2_DIR_Sleep(void) ; 
void VT2_DIR_Wakeup(void) ;


/***************************************
*            Registers        
***************************************/

/* Control Register */
#define VT2_DIR_Control        (* (reg8 *) VT2_DIR_Sync_ctrl_reg__CONTROL_REG )
#define VT2_DIR_Control_PTR    (  (reg8 *) VT2_DIR_Sync_ctrl_reg__CONTROL_REG )

#endif /* End CY_CONTROL_REG_VT2_DIR_H */


/* [] END OF FILE */
