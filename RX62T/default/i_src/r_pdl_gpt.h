/*""FILE COMMENT""*******************************************************
* System Name	: General PWM Timer unit API for RX62T
* File Name		: r_pdl_gpt.h
* Version		: 1.01
* Contents		: GPT API header
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

#ifndef R_PDL_GPT_H
#define R_PDL_GPT_H

#include "r_pdl_common_defs_RX62Txx.h"

/* Function prototypes */
bool R_GPT_Set(
	uint32_t
);

bool R_GPT_Create(
	uint8_t,
	void *
);

bool R_GPT_Destroy(
	uint8_t
);

bool R_GPT_ControlChannel(
	uint8_t,
	uint32_t,
	uint32_t,
	void *
);

bool R_GPT_ControlUnit(
	uint8_t,
	uint32_t,
	uint16_t,
	uint16_t
);

bool R_GPT_ReadChannel(
	uint8_t,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *
);

bool R_GPT_ReadUnit(
	uint8_t,
	uint8_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *
);

/* Pin selection */
#define PDL_GPT_PINS_AB_A						0x00000001ul
#define PDL_GPT_PINS_AB_B						0x00000002ul

/* External trigger interrupt control */
#define PDL_GPT_EXT_TRIGGER_INT_DISABLE			0x00000004ul
#define PDL_GPT_EXT_TRIGGER_INT_RISING			0x00000008ul
#define PDL_GPT_EXT_TRIGGER_INT_FALLING			0x00000010ul
#define PDL_GPT_EXT_TRIGGER_INT_BOTH			0x00000020ul

/* Low-speed on-chip oscillator (LOCO) counter control */
#define PDL_GPT_LOCO_COUNT_CLK_ICLK_DIV_1		0x00000040ul
#define PDL_GPT_LOCO_COUNT_CLK_ICLK_DIV_2		0x00000080ul
#define PDL_GPT_LOCO_COUNT_CLK_ICLK_DIV_4		0x00000100ul
#define PDL_GPT_LOCO_COUNT_CLK_ICLK_DIV_8		0x00000200ul

#define PDL_GPT_LOCO_CLK_DIV_1					0x00000400ul
#define PDL_GPT_LOCO_CLK_DIV_16					0x00000800ul
#define PDL_GPT_LOCO_CLK_DIV_128				0x00001000ul
#define PDL_GPT_LOCO_CLK_DIV_256				0x00002000ul

/* LOCO-derived rising edge skipping control */
#define PDL_GPT_LOCO_SKIP_NONE					0x00004000ul
#define PDL_GPT_LOCO_SKIP_8						0x00008000ul
#define PDL_GPT_LOCO_SKIP_16					0x00010000ul
#define PDL_GPT_LOCO_SKIP_128					0x00020000ul
#define PDL_GPT_LOCO_SKIP_256					0x00040000ul

#define PDL_GPT_LOCO_RESULT_SKIP_DISABLE		0x00080000ul
#define PDL_GPT_LOCO_RESULT_SKIP_ENABLE			0x00100000ul

/* LOCO event interrupt request selection */
#define PDL_GPT_LOCO_INT_RISING_ENABLE			0x00200000ul
#define PDL_GPT_LOCO_INT_DEVIATION_ENABLE		0x00400000ul
#define PDL_GPT_LOCO_INT_OVERFLOW_ENABLE		0x00800000ul

/* DTC event trigger control */
#define PDL_GPT_EXT_LOCO_DTC_TRIGGER_DISABLE	0x01000000ul
#define PDL_GPT_EXT_LOCO_DTC_TRIGGER_ENABLE		0x02000000ul

/* Operation mode */
#define PDL_GPT_MODE_SAW					0x0001u
#define PDL_GPT_MODE_SAW_ONE_SHOT			0x0002u
#define PDL_GPT_MODE_TRIANGLE_1				0x0004u
#define PDL_GPT_MODE_TRIANGLE_2				0x0008u
#define PDL_GPT_MODE_TRIANGLE_3				0x0010u

/* Counter clock source selection */
#define PDL_GPT_CLK_ICLK_DIV_1				0x0020u
#define PDL_GPT_CLK_ICLK_DIV_2				0x0040u
#define PDL_GPT_CLK_ICLK_DIV_4				0x0080u
#define PDL_GPT_CLK_ICLK_DIV_8				0x0100u

/* CMICA interrupt request selection */
#define PDL_GPT_IRQ_A_DISABLE				0x00000001ul
#define PDL_GPT_IRQ_A_ENABLE				0x00000002ul

/* CMICB interrupt request selection */
#define PDL_GPT_IRQ_B_DISABLE				0x00000004ul
#define PDL_GPT_IRQ_B_ENABLE				0x00000008ul

/* CMICC interrupt request selection */
#define PDL_GPT_IRQ_C_DISABLE				0x00000010ul
#define PDL_GPT_IRQ_C_ENABLE				0x00000020ul

/* CMICD interrupt request selection */
#define PDL_GPT_IRQ_D_DISABLE				0x00000040ul
#define PDL_GPT_IRQ_D_ENABLE				0x00000080ul

/* CMICE interrupt request selection */
#define PDL_GPT_IRQ_E_DISABLE				0x00000100ul
#define PDL_GPT_IRQ_E_ENABLE				0x00000200ul

/* CMICF interrupt request selection */
#define PDL_GPT_IRQ_F_DISABLE				0x00000400ul
#define PDL_GPT_IRQ_F_ENABLE				0x00000800ul

/* Dead time interrupt request selection */
#define PDL_GPT_IRQ_DEADTIME_DISABLE		0x00001000ul
#define PDL_GPT_IRQ_DEADTIME_ENABLE			0x00002000ul

/* Overflow / underflow interrupt request selection */
#define PDL_GPT_IRQ_OU_DISABLE				0x00004000ul
#define PDL_GPT_IRQ_OU_OVER					0x00008000ul
#define PDL_GPT_IRQ_OU_UNDER				0x00010000ul
#define PDL_GPT_IRQ_OU_BOTH					0x00020000ul

/* DTC event trigger control */
#define PDL_GPT_CMICA_DTC_TRIGGER_DISABLE	0x00040000ul
#define PDL_GPT_CMICA_DTC_TRIGGER_ENABLE	0x00080000ul
#define PDL_GPT_CMICB_DTC_TRIGGER_DISABLE	0x00100000ul
#define PDL_GPT_CMICB_DTC_TRIGGER_ENABLE	0x00200000ul
#define PDL_GPT_CMCDDTE_DTC_TRIGGER_DISABLE	0x00400000ul
#define PDL_GPT_CMCDDTE_DTC_TRIGGER_ENABLE	0x00800000ul
#define PDL_GPT_CMEF_DTC_TRIGGER_DISABLE	0x01000000ul
#define PDL_GPT_CMEF_DTC_TRIGGER_ENABLE		0x02000000ul
#define PDL_GPT_OU_DTC_TRIGGER_DISABLE		0x04000000ul
#define PDL_GPT_OU_DTC_TRIGGER_ENABLE		0x08000000ul

/* Automatic counter clearing */
#define PDL_GPT_CLEAR_DISABLE		0x00000001ul
#define PDL_GPT_CLEAR_A				0x00000002ul
#define PDL_GPT_CLEAR_B				0x00000004ul
#define PDL_GPT_CLEAR_SYNC_CH_0		0x00000008ul
#define PDL_GPT_CLEAR_SYNC_CH_1		0x00000010ul
#define PDL_GPT_CLEAR_SYNC_CH_2		0x00000020ul
#define PDL_GPT_CLEAR_SYNC_CH_3		0x00000040ul

/* Hardware counter start, stop and clearing */
#define PDL_GPT_HW_START_DISABLE	0x00000080ul
#define PDL_GPT_HW_START_RISING		0x00000100ul
#define PDL_GPT_HW_START_FALLING	0x00000200ul
#define PDL_GPT_HW_START_BOTH		0x00000400ul
#define PDL_GPT_HW_STOP_DISABLE		0x00000800ul
#define PDL_GPT_HW_STOP_RISING		0x00001000ul
#define PDL_GPT_HW_STOP_FALLING		0x00002000ul
#define PDL_GPT_HW_STOP_BOTH		0x00004000ul
#define PDL_GPT_HW_CLEAR_DISABLE	0x00008000ul
#define PDL_GPT_HW_CLEAR_RISING		0x00010000ul
#define PDL_GPT_HW_CLEAR_FALLING	0x00020000ul
#define PDL_GPT_HW_CLEAR_BOTH		0x00040000ul

/* Hardware start selection */
#define PDL_GPT_HW_START_AN000				0x00000001ul
#define PDL_GPT_HW_START_AN001				0x00000002ul
#define PDL_GPT_HW_START_AN002				0x00000004ul
#define PDL_GPT_HW_START_AN100				0x00000008ul
#define PDL_GPT_HW_START_AN101				0x00000010ul
#define PDL_GPT_HW_START_AN102				0x00000020ul
#define PDL_GPT_HW_START_GTIOC3A_IN			0x00000040ul
#define PDL_GPT_HW_START_GTIOC3B_IN			0x00000080ul
#define PDL_GPT_HW_START_GTIOC3A_OUT		0x00000100ul
#define PDL_GPT_HW_START_GTIOC3B_OUT		0x00000200ul
#define PDL_GPT_HW_START_GTETRG				0x00000400ul

/* Hardware stop / clear selection */
#define PDL_GPT_HW_STOP_CLEAR_AN000			0x00000800ul
#define PDL_GPT_HW_STOP_CLEAR_AN001			0x00001000ul
#define PDL_GPT_HW_STOP_CLEAR_AN002			0x00002000ul
#define PDL_GPT_HW_STOP_CLEAR_AN100			0x00004000ul
#define PDL_GPT_HW_STOP_CLEAR_AN101			0x00008000ul
#define PDL_GPT_HW_STOP_CLEAR_AN102			0x00010000ul
#define PDL_GPT_HW_STOP_CLEAR_GTIOC3A_IN	0x00020000ul
#define PDL_GPT_HW_STOP_CLEAR_GTIOC3B_IN	0x00040000ul
#define PDL_GPT_HW_STOP_CLEAR_GTIOC3A_OUT	0x00080000ul
#define PDL_GPT_HW_STOP_CLEAR_GTIOC3B_OUT	0x00100000ul
#define PDL_GPT_HW_STOP_CLEAR_GTETRG		0x00200000ul

/* Compare match / Input capture selection for pin GTIOCnA */
#define PDL_GPT_A_DISABLED			0x00000001ul
#define PDL_GPT_A_CM_RETAIN			0x00000002ul
#define PDL_GPT_A_CM_LOW			0x00000004ul
#define PDL_GPT_A_CM_HIGH			0x00000008ul
#define PDL_GPT_A_CM_INVERT			0x00000010ul
#define PDL_GPT_A_IC_RISING_EDGE	0x00000020ul
#define PDL_GPT_A_IC_FALLING_EDGE	0x00000040ul
#define PDL_GPT_A_IC_BOTH_EDGES		0x00000080ul

#define PDL_GPT_A_LOW_LOW			0x00000100ul
#define PDL_GPT_A_LOW_HIGH			0x00000200ul
#define PDL_GPT_A_HIGH_LOW			0x00000400ul
#define PDL_GPT_A_HIGH_HIGH			0x00000800ul
#define PDL_GPT_A_RETAIN			0x00001000ul
#define PDL_GPT_A_CYCLE_RETAIN		0x00002000ul
#define PDL_GPT_A_CYCLE_LOW			0x00004000ul
#define PDL_GPT_A_CYCLE_HIGH		0x00008000ul
#define PDL_GPT_A_CYCLE_INVERT		0x00010000ul

/* Compare match / Input capture selection for pin GTIOCnB */
#define PDL_GPT_B_DISABLED			0x00000001ul
#define PDL_GPT_B_CM_RETAIN			0x00000002ul
#define PDL_GPT_B_CM_LOW			0x00000004ul
#define PDL_GPT_B_CM_HIGH			0x00000008ul
#define PDL_GPT_B_CM_INVERT			0x00000010ul
#define PDL_GPT_B_IC_RISING_EDGE	0x00000020ul
#define PDL_GPT_B_IC_FALLING_EDGE	0x00000040ul
#define PDL_GPT_B_IC_BOTH_EDGES		0x00000080ul

#define PDL_GPT_B_LOW_LOW			0x00000100ul
#define PDL_GPT_B_LOW_HIGH			0x00000200ul
#define PDL_GPT_B_HIGH_LOW			0x00000400ul
#define PDL_GPT_B_HIGH_HIGH			0x00000800ul
#define PDL_GPT_B_RETAIN			0x00001000ul
#define PDL_GPT_B_CYCLE_RETAIN		0x00002000ul
#define PDL_GPT_B_CYCLE_LOW			0x00004000ul
#define PDL_GPT_B_CYCLE_HIGH		0x00008000ul
#define PDL_GPT_B_CYCLE_INVERT		0x00010000ul

/* ADC conversion trigger selection */
#define PDL_GPT_ADC_TRIG_A_UP_DISABLE	0x00000001ul
#define PDL_GPT_ADC_TRIG_A_UP_ENABLE	0x00000002ul
#define PDL_GPT_ADC_TRIG_A_DOWN_DISABLE	0x00000004ul
#define PDL_GPT_ADC_TRIG_A_DOWN_ENABLE	0x00000008ul
#define PDL_GPT_ADC_TRIG_B_UP_DISABLE	0x00000010ul
#define PDL_GPT_ADC_TRIG_B_UP_ENABLE	0x00000020ul
#define PDL_GPT_ADC_TRIG_B_DOWN_DISABLE	0x00000040ul
#define PDL_GPT_ADC_TRIG_B_DOWN_ENABLE	0x00000080ul

/* Interrupt and ADC trigger skipping control */
#define PDL_GPT_INT_SKIP_OU_DISABLE		0x00000100ul
#define PDL_GPT_INT_SKIP_OU_OVER		0x00000200ul
#define PDL_GPT_INT_SKIP_OU_UNDER		0x00000400ul
#define PDL_GPT_INT_SKIP_OU_BOTH		0x00000800ul
#define PDL_GPT_INT_SKIP_1				0x00001000ul
#define PDL_GPT_INT_SKIP_2				0x00002000ul
#define PDL_GPT_INT_SKIP_3				0x00004000ul
#define PDL_GPT_INT_SKIP_4				0x00008000ul
#define PDL_GPT_INT_SKIP_5				0x00010000ul
#define PDL_GPT_INT_SKIP_6				0x00020000ul
#define PDL_GPT_INT_SKIP_7				0x00040000ul
#define PDL_GPT_INT_SKIP_A				0x00080000ul
#define PDL_GPT_INT_SKIP_B				0x00100000ul
#define PDL_GPT_INT_SKIP_C				0x00200000ul
#define PDL_GPT_INT_SKIP_D				0x00400000ul
#define PDL_GPT_INT_SKIP_E				0x00800000ul
#define PDL_GPT_INT_SKIP_F				0x01000000ul
#define PDL_GPT_ADC_TRIG_SKIP_A			0x02000000ul
#define PDL_GPT_ADC_TRIG_SKIP_B			0x04000000ul

/* Buffer control options */
#define PDL_GPT_BUFFER_CMIC_A_DISABLE		0x00000001ul
#define PDL_GPT_BUFFER_CMIC_A_SINGLE		0x00000002ul
#define PDL_GPT_BUFFER_CMIC_A_DOUBLE		0x00000004ul
#define PDL_GPT_BUFFER_CMIC_B_DISABLE		0x00000008ul
#define PDL_GPT_BUFFER_CMIC_B_SINGLE		0x00000010ul
#define PDL_GPT_BUFFER_CMIC_B_DOUBLE		0x00000020ul
#define PDL_GPT_BUFFER_CYCLE_DISABLE		0x00000040ul
#define PDL_GPT_BUFFER_CYCLE_SINGLE			0x00000080ul
#define PDL_GPT_BUFFER_CYCLE_DOUBLE			0x00000100ul
#define PDL_GPT_BUFFER_ADC_TRIG_A_DISABLE	0x00000200ul
#define PDL_GPT_BUFFER_ADC_TRIG_A_CREST		0x00000400ul
#define PDL_GPT_BUFFER_ADC_TRIG_A_TROUGH	0x00000800ul
#define PDL_GPT_BUFFER_ADC_TRIG_A_BOTH		0x00001000ul
#define PDL_GPT_BUFFER_ADC_TRIG_A_SAW		0x00002000ul
#define PDL_GPT_BUFFER_ADC_TRIG_A_SINGLE	0x00004000ul
#define PDL_GPT_BUFFER_ADC_TRIG_A_DOUBLE	0x00008000ul
#define PDL_GPT_BUFFER_ADC_TRIG_B_DISABLE	0x00010000ul
#define PDL_GPT_BUFFER_ADC_TRIG_B_CREST		0x00020000ul
#define PDL_GPT_BUFFER_ADC_TRIG_B_TROUGH	0x00040000ul
#define PDL_GPT_BUFFER_ADC_TRIG_B_BOTH		0x00080000ul
#define PDL_GPT_BUFFER_ADC_TRIG_B_SAW		0x00100000ul
#define PDL_GPT_BUFFER_ADC_TRIG_B_SINGLE	0x00200000ul
#define PDL_GPT_BUFFER_ADC_TRIG_B_DOUBLE	0x00400000ul

/* Negate control options */
#define PDL_GPT_NEGATE_A_DISABLE				0x00000001ul
#define PDL_GPT_NEGATE_A_LOW					0x00000002ul
#define PDL_GPT_NEGATE_A_HIGH					0x00000004ul
#define PDL_GPT_NEGATE_B_DISABLE				0x00000008ul
#define PDL_GPT_NEGATE_B_LOW					0x00000010ul
#define PDL_GPT_NEGATE_B_HIGH					0x00000020ul
#define PDL_GPT_NEGATE_AN000					0x00000040ul
#define PDL_GPT_NEGATE_AN001					0x00000080ul
#define PDL_GPT_NEGATE_AN002					0x00000100ul
#define PDL_GPT_NEGATE_AN100					0x00000200ul
#define PDL_GPT_NEGATE_AN101					0x00000400ul
#define PDL_GPT_NEGATE_AN102					0x00000800ul
#define PDL_GPT_NEGATE_GTETRG					0x00001000ul
#define PDL_GPT_NEGATE_SOFTWARE					0x00002000ul
#define PDL_GPT_NEGATE_0						0x00004000ul
#define PDL_GPT_NEGATE_1						0x00008000ul

/* Dead-time control options */
#define PDL_GPT_DEAD_TIME_DISABLE				0x00010000ul
#define PDL_GPT_DEAD_TIME_ENABLE				0x00020000ul
#define PDL_GPT_DEAD_TIME_UP_BUFFER_DISABLE		0x00040000ul
#define PDL_GPT_DEAD_TIME_UP_BUFFER_ENABLE		0x00080000ul
#define PDL_GPT_DEAD_TIME_DOWN_BUFFER_DISABLE	0x00100000ul
#define PDL_GPT_DEAD_TIME_DOWN_BUFFER_ENABLE	0x00200000ul
#define PDL_GPT_DEAD_TIME_DOWN_MATCH_UP			0x00400000ul

/* Counter stop / start */
#define PDL_GPT_STOP						0x00000001ul
#define PDL_GPT_START						0x00000002ul

/* Counter clearing */
#define PDL_GPT_COUNTER_CLEAR				0x00000004ul

/* Buffer operation control */
#define PDL_GPT_BUFFER_CMIC_STOP			0x00000008ul
#define PDL_GPT_BUFFER_CMIC_START			0x00000010ul
#define PDL_GPT_BUFFER_CYCLE_STOP			0x00000020ul
#define PDL_GPT_BUFFER_CYCLE_START			0x00000040ul
#define PDL_GPT_BUFFER_ADC_TRIG_STOP		0x00000080ul
#define PDL_GPT_BUFFER_ADC_TRIG_START		0x00000100ul
#define PDL_GPT_BUFFER_DEAD_TIME_STOP		0x00000200ul
#define PDL_GPT_BUFFER_DEAD_TIME_START		0x00000400ul

/* Forced buffer operation */
#define PDL_GPT_BUFFER_CMIC_FORCE			0x00000800ul

/* Write protection */
#define PDL_GPT_WRITE_ENABLE				0x00001000ul
#define PDL_GPT_WRITE_DISABLE				0x00002000ul

/* Count direction */
#define PDL_GPT_COUNT_DIRECTION_DOWN		0x00004000ul
#define PDL_GPT_COUNT_DIRECTION_UP			0x00008000ul
#define PDL_GPT_COUNT_DIRECTION_FORCE		0x00010000ul

/* Forced buffer operation */
#define PDL_GPT_NEGATE_ON					0x00020000ul
#define PDL_GPT_NEGATE_OFF					0x00040000ul

/* Output protection temporary release control */
#define PDL_GPT_OUTPUT_PROTECTION_RELEASE	0x00080000ul
#define PDL_GPT_OUTPUT_PROTECTION_RESTORE	0x00100000ul

/* Register selection */
#define PDL_GPT_REGISTER_COUNTER				0x00000001ul
#define PDL_GPT_REGISTER_A						0x00000002ul
#define PDL_GPT_REGISTER_B						0x00000004ul
#define PDL_GPT_REGISTER_C						0x00000008ul
#define PDL_GPT_REGISTER_D						0x00000010ul
#define PDL_GPT_REGISTER_E						0x00000020ul
#define PDL_GPT_REGISTER_F						0x00000040ul
#define PDL_GPT_REGISTER_CYCLE					0x00000080ul
#define PDL_GPT_REGISTER_CYCLE_BUFFER			0x00000100ul
#define PDL_GPT_REGISTER_CYCLE_DOUBLE			0x00000200ul
#define PDL_GPT_REGISTER_ADC_TRIG_A				0x00000400ul
#define PDL_GPT_REGISTER_ADC_TRIG_A_BUFFER		0x00000800ul
#define PDL_GPT_REGISTER_ADC_TRIG_A_DOUBLE		0x00001000ul
#define PDL_GPT_REGISTER_ADC_TRIG_B				0x00002000ul
#define PDL_GPT_REGISTER_ADC_TRIG_B_BUFFER		0x00004000ul
#define PDL_GPT_REGISTER_ADC_TRIG_B_DOUBLE		0x00008000ul
#define PDL_GPT_REGISTER_DEAD_TIME_UP			0x00010000ul
#define PDL_GPT_REGISTER_DEAD_TIME_UP_BUFFER	0x00020000ul
#define PDL_GPT_REGISTER_DEAD_TIME_DOWN			0x00040000ul
#define PDL_GPT_REGISTER_DEAD_TIME_DOWN_BUFFER	0x00080000ul

/* Counter stop */
#define PDL_GPT_STOP_CH_0					0x00000001ul
#define PDL_GPT_STOP_CH_1					0x00000002ul
#define PDL_GPT_STOP_CH_2					0x00000004ul
#define PDL_GPT_STOP_CH_3					0x00000008ul

/* Counter start */
#define PDL_GPT_START_CH_0					0x00000010ul
#define PDL_GPT_START_CH_1					0x00000020ul
#define PDL_GPT_START_CH_2					0x00000040ul
#define PDL_GPT_START_CH_3					0x00000080ul

/* Counter clearing */
#define PDL_GPT_CLEAR_CH_0					0x00000100ul
#define PDL_GPT_CLEAR_CH_1					0x00000200ul
#define PDL_GPT_CLEAR_CH_2					0x00000400ul
#define PDL_GPT_CLEAR_CH_3					0x00000800ul

/* LOCO counter stop / start */
#define PDL_GPT_LOCO_COUNT_DISABLE			0x00001000ul
#define PDL_GPT_LOCO_COUNT_ENABLE			0x00002000ul

/* LOCO counter clearing */
#define PDL_GPT_LOCO_COUNT_CLEAR			0x00004000ul

/* PDL_GPT_LOCO_RESULTS_INIT */
#define PDL_GPT_LOCO_RESULTS_INIT			0x00008000ul

/* LOCO deviation registers */
#define PDL_GPT_LOCO_DEVIATION_TOLERANCE	0x00010000ul
#define PDL_GPT_LOCO_DEVIATION_REGISTER		0x00020000ul

#endif
/* End of file */
