/*""FILE COMMENT""*******************************************************
* System Name	: PFC API for RX62Txx
* File Name		: r_pdl_pfc_RX62Txx.h
* Version		: 1.01
* Contents		: PFC API header
* Customer		: 
* Model			: 
* Order			: 
* CPU			: RX
* Compiler		: RXC
* OS			: Nothing
* Programmer	: 
* Note			: 
************************************************************************
* Copyright, 2011. Renesas Electronics Corporation
* and Renesas Solutions Corporation
************************************************************************
* History		: 2011.05.04
*				: Ver 1.01
*				: Release CS3.
*""FILE COMMENT END""**************************************************/

#ifndef R_PDL_PFC_RX62Txx_H
#define R_PDL_PFC_RX62Txx_H

/* Library prototypes */
bool R_PFC_ReadRegisterAll(
	const uint8_t,
	volatile uint8_t * const
);
bool R_PFC_WriteRegisterAll(
	const uint8_t,
	const uint8_t
);
bool R_PFC_ModifyRegisterAll(
	const uint8_t,
	const uint8_t,
	const uint8_t
);
bool ReturnFalse(void);

/* Macro definitions */

/* R_PFC_Read */
/* Call the function if the PFC number is valid. */
#define R_PFC_Read(a, b) \
( \
( ((a) >= PDL_PFC_PF8IRQ) && ((a) <= PDL_PFC_PFNPOE) ) ? \
R_PFC_ReadRegisterAll( (a), (b) ) : \
ReturnFalse() \
)

/* R_PFC_Write */
/* Call the function if the PFC number is valid. */
#define R_PFC_Write(a, b) \
( \
( ((a) >= PDL_PFC_PF8IRQ) && ((a) <= PDL_PFC_PFNPOE) ) ? \
R_PFC_WriteRegisterAll( (a), (b) ) : \
ReturnFalse() \
)

/* R_PFC_Modify */
/* Call the function if the PFC number is valid. */
#define R_PFC_Modify(a, b, c) \
( \
( ((a) >= PDL_PFC_PF8IRQ) && ((a) <= PDL_PFC_PFNPOE) ) ? \
R_PFC_ModifyRegisterAll( (a), (b), (c) ) : \
ReturnFalse() \
)

#endif
/* End of file */
