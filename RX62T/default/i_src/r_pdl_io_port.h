/*""FILE COMMENT""*******************************************************
* System Name	: I/O Port API
* File Name		: r_pdl_io_port.h
* Version		: 1.01
* Contents		: I/O Port API header
* Customer		: 
* Model			: 
* Order			: 
* CPU			: RX
* Compiler		: RXC
* OS			:
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

#ifndef R_PDL_IO_PORT_H
#define R_PDL_IO_PORT_H

#include "r_pdl_common_defs_RX62Txx.h"

/* Function prototypes */
bool R_IO_PORT_Set(
	uint16_t,
	uint8_t
);
bool R_IO_PORT_ReadControl(
	uint16_t,
	uint8_t,
	uint8_t *
);
bool R_IO_PORT_ModifyControl(
	uint16_t,
	uint8_t,
	uint8_t
);
bool R_IO_PORT_Read(
	uint16_t,
	uint8_t *
);
bool R_IO_PORT_Write(
	uint16_t,
	uint8_t
);
bool R_IO_PORT_Compare(
	uint16_t,
	uint8_t,
	void *
);
bool R_IO_PORT_Modify(
	uint16_t,
	uint8_t,
	uint8_t
);
bool R_IO_PORT_Wait(
	uint16_t,
	uint8_t
);

/* I/O Ports*/
#define PDL_IO_PORT_1	0xF001u	/* Port 1 */
#define PDL_IO_PORT_2	0xF002u	/* Port 2 */
#define PDL_IO_PORT_3	0xF003u	/* Port 3 */
#define PDL_IO_PORT_4	0xF004u	/* Port 4 */
#define PDL_IO_PORT_5	0xF005u	/* Port 5 */
#define PDL_IO_PORT_6	0xF006u	/* Port 6 */
#define PDL_IO_PORT_7	0xF007u	/* Port 7 */
#define PDL_IO_PORT_8	0xF008u	/* Port 8 */
#define PDL_IO_PORT_9	0xF009u	/* Port 9 */
#define PDL_IO_PORT_A	0xF00Au	/* Port A */
#define PDL_IO_PORT_B	0xF00Bu	/* Port B */
#define PDL_IO_PORT_D	0xF00Du	/* Port D */
#define PDL_IO_PORT_E	0xF00Eu	/* Port E */
#define PDL_IO_PORT_G	0xF010u	/* Port G */

/* I/O port pins */
#define PDL_IO_PORT_1_0 0x0101u	/* P10 */
#define PDL_IO_PORT_1_1 0x0102u	/* P11 */

#define PDL_IO_PORT_2_0 0x0201u	/* P20 */
#define PDL_IO_PORT_2_1 0x0202u	/* P21 */
#define PDL_IO_PORT_2_2 0x0204u	/* P22 */
#define PDL_IO_PORT_2_3 0x0208u	/* P23 */
#define PDL_IO_PORT_2_4 0x0210u	/* P24 */

#define PDL_IO_PORT_3_0 0x0301u	/* P30 */
#define PDL_IO_PORT_3_1 0x0302u	/* P31 */
#define PDL_IO_PORT_3_2 0x0304u	/* P32 */
#define PDL_IO_PORT_3_3 0x0308u	/* P33 */

#define PDL_IO_PORT_4_0 0x0401u	/* P40 */
#define PDL_IO_PORT_4_1 0x0402u	/* P41 */
#define PDL_IO_PORT_4_2 0x0404u	/* P42 */
#define PDL_IO_PORT_4_3 0x0408u	/* P43 */
#define PDL_IO_PORT_4_4 0x0410u	/* P44 */
#define PDL_IO_PORT_4_5 0x0420u	/* P45 */
#define PDL_IO_PORT_4_6 0x0440u	/* P46 */
#define PDL_IO_PORT_4_7 0x0480u	/* P47 */

#define PDL_IO_PORT_5_0 0x0501u	/* P50 */
#define PDL_IO_PORT_5_1 0x0502u	/* P51 */
#define PDL_IO_PORT_5_2 0x0504u	/* P52 */
#define PDL_IO_PORT_5_3 0x0508u	/* P53 */
#define PDL_IO_PORT_5_4 0x0510u	/* P54 */
#define PDL_IO_PORT_5_5 0x0520u	/* P55 */

#define PDL_IO_PORT_6_0 0x0601u	/* P60 */
#define PDL_IO_PORT_6_1 0x0602u	/* P61 */
#define PDL_IO_PORT_6_2 0x0604u	/* P62 */
#define PDL_IO_PORT_6_3 0x0608u	/* P63 */
#define PDL_IO_PORT_6_4 0x0610u	/* P64 */
#define PDL_IO_PORT_6_5 0x0620u	/* P65 */

#define PDL_IO_PORT_7_0 0x0701u	/* P70 */
#define PDL_IO_PORT_7_1 0x0702u	/* P71 */
#define PDL_IO_PORT_7_2 0x0704u	/* P72 */
#define PDL_IO_PORT_7_3 0x0708u	/* P73 */
#define PDL_IO_PORT_7_4 0x0710u	/* P74 */
#define PDL_IO_PORT_7_5 0x0720u	/* P75 */
#define PDL_IO_PORT_7_6 0x0740u	/* P76 */

#define PDL_IO_PORT_8_0 0x0801u	/* P80 */
#define PDL_IO_PORT_8_1 0x0802u	/* P81 */
#define PDL_IO_PORT_8_2 0x0804u	/* P82 */

#define PDL_IO_PORT_9_0 0x0901u	/* P90 */
#define PDL_IO_PORT_9_1 0x0902u	/* P91 */
#define PDL_IO_PORT_9_2 0x0904u	/* P92 */
#define PDL_IO_PORT_9_3 0x0908u	/* P93 */
#define PDL_IO_PORT_9_4 0x0910u	/* P94 */
#define PDL_IO_PORT_9_5 0x0920u	/* P95 */
#define PDL_IO_PORT_9_6 0x0940u	/* P96 */

#define PDL_IO_PORT_A_0 0x0A01u	/* PA0 */
#define PDL_IO_PORT_A_1 0x0A02u	/* PA1 */
#define PDL_IO_PORT_A_2 0x0A04u	/* PA2 */
#define PDL_IO_PORT_A_3 0x0A08u	/* PA3 */
#define PDL_IO_PORT_A_4 0x0A10u	/* PA4 */
#define PDL_IO_PORT_A_5 0x0A20u	/* PA5 */

#define PDL_IO_PORT_B_0 0x0B01u	/* PB0 */
#define PDL_IO_PORT_B_1 0x0B02u	/* PB1 */
#define PDL_IO_PORT_B_2 0x0B04u	/* PB2 */
#define PDL_IO_PORT_B_3 0x0B08u	/* PB3 */
#define PDL_IO_PORT_B_4 0x0B10u	/* PB4 */
#define PDL_IO_PORT_B_5 0x0B20u	/* PB5 */
#define PDL_IO_PORT_B_6 0x0B40u	/* PB6 */
#define PDL_IO_PORT_B_7 0x0B80u	/* PB7 */

#define PDL_IO_PORT_D_0 0x0D01u	/* PD0 */
#define PDL_IO_PORT_D_1 0x0D02u	/* PD1 */
#define PDL_IO_PORT_D_2 0x0D04u	/* PD2 */
#define PDL_IO_PORT_D_3 0x0D08u	/* PD3 */
#define PDL_IO_PORT_D_4 0x0D10u	/* PD4 */
#define PDL_IO_PORT_D_5 0x0D20u	/* PD5 */
#define PDL_IO_PORT_D_6 0x0D40u	/* PD6 */
#define PDL_IO_PORT_D_7 0x0D80u	/* PD7 */

#define PDL_IO_PORT_E_0 0x0E01u	/* PE0 */
#define PDL_IO_PORT_E_1 0x0E02u	/* PE1 */
#define PDL_IO_PORT_E_2 0x0E04u	/* PE2 */
#define PDL_IO_PORT_E_3 0x0E08u	/* PE3 */
#define PDL_IO_PORT_E_4 0x0E10u	/* PE4 */
#define PDL_IO_PORT_E_5 0x0E20u	/* PE5 */

#define PDL_IO_PORT_G_0 0x1001u	/* PG0 */
#define PDL_IO_PORT_G_1 0x1002u	/* PG1 */
#define PDL_IO_PORT_G_2 0x1004u	/* PG2 */
#define PDL_IO_PORT_G_3 0x1008u	/* PG3 */
#define PDL_IO_PORT_G_4 0x1010u	/* PG4 */
#define PDL_IO_PORT_G_5 0x1020u	/* PG5 */

/* Settings */
#define PDL_IO_PORT_INPUT				0x01u	/* Input port */
#define PDL_IO_PORT_OUTPUT				0x02u	/* Output port */
#define PDL_IO_PORT_INPUT_BUFFER_ON		0x04u	/* The input buffer is enabled */
#define PDL_IO_PORT_INPUT_BUFFER_OFF	0x08u	/* The input buffer is disabled */

/* Control register selection */
#define PDL_IO_PORT_DIRECTION		0x01u
#define PDL_IO_PORT_INPUT_BUFFER	0x02u

/* Logical operations */
#define PDL_IO_PORT_AND				0x10u
#define PDL_IO_PORT_OR				0x20u
#define PDL_IO_PORT_XOR				0x40u

#endif
/* End of file */
