/***********************************************************************/
/*                                                                     */
/*  FILE        :week16_sccb.c                                         */
/*  DATE        :Mon, Jun 06, 2022                                     */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :RX62T                                                 */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.51).    */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/*                                                                     */
/***********************************************************************/
                  


//#include "typedefine.h"
#ifdef __cplusplus
//#include <ios>                        // Remove the comment when you use ios
//_SINT ios_base::Init::init_cnt;       // Remove the comment when you use ios
#endif

void main(void);
#ifdef __cplusplus
"C" {
void abort(void);
}
#endif

#include "setup.h"

uint16_t delay;
uint8_t u2Tx, i2cTx, i2cRx, u2Rx;
uint8_t i2cSlBuf[4];
uint8_t out[2], vsync;
uint8_t d1, d2, st;
uint8_t p10, p10L;
uint16_t i, j;
const uint16_t ms=1250;
uint16_t servo[2];
float s1, s2;

void u2Wr(uint8_t * buf, uint16_t count) {
	u2Tx = 1;
	R_PG_SCI_StartSending_C2(buf, count);
	while (u2Tx);
}


void OV7670(void) {
	vsync++;
	if(vsync==1) {
		R_PG_IO_PORT_Write_P70(1);
		R_PG_IO_PORT_Write_P70(0);
		for(i=0;i<1000;i++);
		R_PG_IO_PORT_Write_P70(1);
		R_PG_IO_PORT_Write_P71(1);
	}
	if(vsync==2) {
		R_PG_IO_PORT_Write_P71(0);

		R_PG_IO_PORT_Write_P24(0);
		R_PG_IO_PORT_Write_P23(0);
		R_PG_IO_PORT_Write_P23(1);
		R_PG_IO_PORT_Write_P23(0);
		R_PG_IO_PORT_Write_P23(1);
		R_PG_IO_PORT_Write_P24(1);

		R_PG_IO_PORT_Write_P22(0);
		out[0] = 0x01;
		out[1] = 0xFE;
		u2Wr(out, 2);
		for(i = 0; i < 4800; i ++) {  
//			for(j = 0; j < 8; j ++) {                   
				R_PG_IO_PORT_Write_P23(0);
				R_PG_IO_PORT_Write_P23(1);
				R_PG_IO_PORT_Read_P4(&d1);
				R_PG_IO_PORT_Write_P23(0);
				R_PG_IO_PORT_Write_P23(1);
				R_PG_IO_PORT_Read_P4(&d2);
				out[0] = d2;
				out[1] = d1;
				u2Wr(out, 2);
//			}
		}
		R_PG_IO_PORT_Write_P22(1);
		
		out[0] = 0xFE;
		out[1] = 0x01;
		u2Wr(out, 2);
		vsync = 0;
	}
}

void main(void)
{
	R_PG_Clock_Set();
	R_PG_Timer_Start_CMT_U0_C0();
	R_PG_IO_PORT_Set_P1();
	R_PG_IO_PORT_Set_P2();
	R_PG_IO_PORT_Set_P4();
	R_PG_IO_PORT_Set_P7();
	R_PG_IO_PORT_Set_P9();
	R_PG_Timer_Set_MTU_U0_C4();
	R_PG_Timer_Set_MTU_U0_C2();
	
	R_PG_IO_PORT_Write_P94(0);
	delayMs(1000);
	R_PG_IO_PORT_Write_P94(1);
	delayMs(1000);
	
	for (i=0 ; i<10 ; i++) delayMs(10000);
	
	s1 = s2 = 4;
	servo[0] = ((s1*0.2)+0.7)*(float)ms;
	servo[1] = ((s2*0.2)+0.7)*(float)ms;
	R_PG_Timer_StartCount_MTU_U0_C2();
	R_PG_Timer_StartCount_MTU_U0_C4();
	
	R_PG_SCI_Set_C2();
	R_PG_I2C_Set_C0();
	
	set_reg_Complex();
	R_PG_Timer_HaltCount_CMT_U0_C0();
	R_PG_I2C_Reset_C0();
	R_PG_I2C_SlaveMonitor_C0(i2cSlBuf, 4);
	
	while (1) {
		R_PG_IO_PORT_Read_P10(&p10);
		if (p10 < p10L) {
			OV7670();
		}
		p10L = p10;
	}
}

void delayFunc() {
	delay++;
}
void u2TxFunc() {
	u2Tx = 0;
}
void u2RxFunc() {
	u2Rx = 0;
}
void i2cSlFunc() {
	if (i2cSlBuf[0] == ' ' && i2cSlBuf[3] == ' ') {
		switch (i2cSlBuf[1]) {
			case '1':
				if (i2cSlBuf[2] >= '0' && i2cSlBuf[2] <= '2') s1 += (char)i2cSlBuf[2] - '1';
				if (s1 > 8) s1 = 8;
				else if (s1 < 3) s1 = 3;
				servo[0] = (s1*0.2+0.7)*(float)ms;
				break;
			case '2':
				if (i2cSlBuf[2] >= '0' && i2cSlBuf[2] <= '2') s2 += (char)i2cSlBuf[2] - '1';
				if (s2 > 8) s2 = 8;
				else if (s2 < 0) s2 = 0;
				servo[1] = (s2*0.2+0.7)*(float)ms;
				break;
		}
	}
	R_PG_I2C_SlaveMonitor_C0(i2cSlBuf, 4);
}
void i2cRxFunc() {
	i2cRx = 0;
}
void i2cTxFunc() {
	i2cTx = 0;
}
void s1Func() {
	R_PG_Timer_GetRequestFlag_MTU_U0_C0(0, 0, 0, 0, 0, 0, 0, 0);
	R_PG_Timer_SetTGR_D_MTU_U0_C0(servo[0]);
}
void s3Func() {
	R_PG_Timer_GetRequestFlag_MTU_U0_C2(0, 0, 0, 0, 0, 0, 0, 0);
	R_PG_Timer_SetTGR_B_MTU_U0_C2(servo[0]);
}
void s2Func() {
	R_PG_Timer_GetRequestFlag_MTU_U0_C4(0, 0, 0, 0, 0, 0, 0, 0);
	R_PG_Timer_SetTGR_D_MTU_U0_C4(servo[1]);
}

#ifdef __cplusplus
void abort(void)
{

}
#endif
