/*
 * tas2552.h -- TAS2552 Audio Amplifier Driver
 *
 * Copyright (c) 2014, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 */

#ifndef __TAS2552_H__
#define __TAS2552_H__

/* TAS2552 I2C Address */
#define TAS2552_I2C_ADDR			0x40

/*
 * TAS2552 Register Map
 */
#define TAS2552_REG_00_DEVICE_STATUS		0x00
#define TAS2552_REG_01_CONFIG1			0x01
#define TAS2552_REG_02_CONFIG2			0x02
#define TAS2552_REG_03_CONFIG3			0x03
#define TAS2552_REG_04_DOUT_TRISTATE_MODE	0x04
#define TAS2552_REG_05_SERIAL_IF_CONTROL1	0X05
#define TAS2552_REG_06_SERIAL_IF_CONTROL2	0X06
#define TAS2552_REG_07_OUTPUT_DATA		0x07
#define TAS2552_REG_08_PLL_CONTROL1		0x08
#define TAS2552_REG_09_PLL_CONTROL2		0x09
#define TAS2552_REG_0A_PLL_CONTROL3		0x0A
#define TAS2552_REG_0B_BAT_TRACK_INF_POINT	0x0B
#define TAS2552_REG_0C_BAT_TRACK_SLOPE_CONTROL	0x0C
#define TAS2552_REG_0D_LIMIT_LVL_CONTROL	0X0D
#define TAS2552_REG_0E_LIMIT_ATTK_RATE		0x0E
#define TAS2552_REG_0F_LIMIT_RELEASE_RATE	0x0F
#define TAS2552_REG_10_LIMIT_INTEG_CNT_CONTROL	0x10
#define TAS2552_REG_11_PDM_CONFIG		0x11
#define TAS2552_REG_12_PGA_GAIN			0x12
#define TAS2552_REG_13_CLASS_D_EDGE_RATE	0x13
#define TAS2552_REG_14_BOOST_AUTO_PASS_THRU	0x14
#define TAS2552_REG_15_RESERVED			0x15
#define TAS2552_REG_16_VERSION_NUMBER		0x16
#define TAS2552_REG_17_RESERVED			0x17
#define TAS2552_REG_18_RESERVED			0x18
#define TAS2552_REG_19_VBAT_DATA		0x19

#define TAS2552_MAX_REGISTER			0x19

/* TAS2552 Register Bit Fields */

/*
 * TAS2552_REG_00_DEVICE_STATUS
 */
#define TAS2552_PLL_OUT_OF_LOCK_MASK		(1 << 5)
#define TAS2552_PLL_OUT_OF_LOCK_SHIFT		5
#define TAS2552_PLL_OUT_OF_LOCK_WIDTH		1
#define TAS2552_CLASSD_ILIM_MASK		(1 << 1)
#define TAS2552_CLASSD_ILIM_SHIFT		1
#define TAS2552_CLASSD_ILIM_WIDTH		1
#define TAS2552_THERMAL_MASK			(1 << 0)
#define TAS2552_THERMAL_SHIFT			0
#define TAS2552_THERMAL_WIDTH			1

/*
 * TAS2552_REG_01_CONFIG1
 */
#define TAS2552_PLL_SRC_MASK			(3 << 4)
#define TAS2552_PLL_SRC_SHIFT			4
#define TAS2552_PLL_SRC_WIDTH			2
#define TAS2552_MUTE_MASK			(1 << 2)
#define TAS2552_MUTE_SHIFT			2
#define TAS2552_MUTE_WIDTH			1
#define TAS2552_SWS_MASK			(1 << 1)
#define TAS2552_SWS_SHIFT			1
#define TAS2552_SWS_WIDTH			1
#define TAS2552_DEV_RESET_MASK			(1 << 0)
#define TAS2552_DEV_RESET_SHIFT			0
#define TAS2552_DEV_RESET_WIDTH			1

/*
 * TAS2552_REG_02_CONFIG2
 */
#define TAS2552_CLASSD_EN_MASK			(1 << 7)
#define TAS2552_CLASSD_EN_SHIFT			7
#define TAS2552_CLASSD_EN_WIDTH			1
#define TAS2552_BOOST_EN_MASK			(1 << 6)
#define TAS2552_BOOST_EN_SHIFT			6
#define TAS2552_BOOST_EN_WIDTH			1
#define TAS2552_APT_EN_MASK			(1 << 5)
#define TAS2552_APT_EN_SHIFT			5
#define TAS2552_APT_EN_WIDTH			1
#define TAS2552_PLL_EN_MASK			(1 << 3)
#define TAS2552_PLL_EN_SHIFT			3
#define TAS2552_PLL_EN_WIDTH			1
#define TAS2552_LIM_EN_MASK			(1 << 2)
#define TAS2552_LIM_EN_SHIFT			2
#define TAS2552_LIM_EN_WIDTH			1
#define TAS2552_IVSENSE_EN_MASK			(1 << 1)
#define TAS2552_IVSENSE_EN_SHIFT		1
#define TAS2552_IVSENSE_EN_WIDTH		1

/*
 * TAS2552_REG_03_CONFIG3
 */
#define TAS2552_ANALOG_IN_SEL_MASK		(1 << 7)
#define TAS2552_ANALOG_IN_SEL_SHIFT		7
#define TAS2552_ANALOG_IN_SEL_WIDTH		1
#define TAS2552_I2S_OUT_SEL_MASK		(1 << 6)
#define TAS2552_I2S_OUT_SEL_SHIFT		6
#define TAS2552_I2S_OUT_SEL_WIDTH		1
#define TAS2552_PDM_IN_SEL_MASK			(1 << 5)
#define TAS2552_PDM_IN_SEL_SHIFT		5
#define TAS2552_PDM_IN_SEL_WIDTH		1
#define TAS2552_DIN_SOURCE_SEL_MASK		(3 << 2)
#define TAS2552_DIN_SOURCE_SEL_SHIFT		3
#define TAS2552_DIN_SOURCE_SEL_WIDTH		2
#define TAS2552_WCLK_FREQ_MASK			(7 << 0)
#define TAS2552_WCLK_FREQ_SHIFT			0
#define TAS2552_WCLK_FREQ_WIDTH			3

/*
 * TAS2552_REG_04_DOUT_TRISTATE_MODE
 */
#define TAS2552_SDOUT_TRISTATE_MASK		(1 << 2)
#define TAS2552_SDOUT_TRISTATE_SHIFT		2
#define TAS2552_SDOUT_TRISTATE_WIDTH		1
#define TAS2552_RW_MASK				(3 << 0)
#define TAS2552_RW_SHIFT			0
#define TAS2552_RW_WIDTH			2

/*
 * TAS2552_REG_05_SERIAL_IF_CONTROL1
 */
#define TAS2552_WCLKDIR_MASK			(1 << 7)
#define TAS2552_WCLKDIR_SHIFT			7
#define TAS2552_WCLKDIR_WIDTH			1
#define TAS2552_BCLKDIR_MASK			(1 << 6)
#define TAS2552_BCLKDIR_SHIFT			6
#define TAS2552_BCLKDIR_WIDTH			1
#define TAS2552_CLKSPERFRAME_MASK		(3 << 2)
#define TAS2552_CLKSPERFRAME_SHIFT		4
#define TAS2552_CLKSPERFRAME_WIDTH		2
#define TAS2552_DATAFORMAT_MASK			(3 << 2)
#define TAS2552_DATAFORMAT_SHIFT		2
#define TAS2552_DATAFORMAT_WIDTH		2
#define TAS2552_WORDLENGTH_MASK			(3 << 0)
#define TAS2552_WORDLENGTH_SHIFT		0
#define TAS2552_WORDLENGTH_WIDTH		2

/*
 * TAS2552_REG_06_SERIAL_IF_CONTROL2
 */
#define TAS2552_I2S_SHIFT_REG_MASK		(255 << 0)
#define TAS2552_I2S_SHIFT_REG_SHIFT		0
#define TAS2552_I2S_SHIFT_REG_WIDTH		8

/*
 * TAS2552_REG_07_OUTPUT_DATA
 */
#define TAS2552_PDM_DATA_SEL_MASK		(3 << 6)
#define TAS2552_PDM_DATA_SEL_SHIFT		6
#define TAS2552_PDM_DATA_SEL_WIDTH		2
#define TAS2552_R_DATA_OUT_MASK			(7 << 3)
#define TAS2552_R_DATA_OUT_SHIFT		3
#define TAS2552_R_DATA_OUT_WIDTH		3
#define TAS2552_L_DATA_OUT_MASK			(7 << 0)
#define TAS2552_L_DATA_OUT_SHIFT		0
#define TAS2552_L_DATA_OUT_WIDTH		3

/*
 * TAS2552_REG_08_PLL_CONTROL1
 */
#define TAS2552_PLL_PRESCALE_SEL_MASK		(1 << 7)
#define TAS2552_PLL_PRESCALE_SEL_SHIFT		7
#define TAS2552_PLL_PRESCALE_SEL_WIDTH		1
#define TAS2552_PLL_J_MASK			(127 << 0)
#define TAS2552_PLL_J_SHIFT			0
#define TAS2552_PLL_J_WIDTH			7

/*
 * TAS2552_REG_09_PLL_CONTROL2
 */
#define TAS2552_PLL_BYPASS_MASK			(1 << 7)
#define TAS2552_PLL_BYPASS_SHIFT		7
#define TAS2552_PLL_BYPASS_WIDTH		1
#define TAS2552_PLL_D_MSB_MASK			(63 << 0)
#define TAS2552_PLL_D_MSB_SHIFT			0
#define TAS2552_PLL_D_MSB_WIDTH			6

/*
 * TAS2552_REG_0A_PLL_CONTROL3
 */
#define TAS2552_PLL_D_LSB_MASK			(255 << 0)
#define TAS2552_PLL_D_LSB_SHIFT			0
#define TAS2552_PLL_D_LSB_WIDTH			8

/*
 * TAS2552_REG_0B_BAT_TRACK_INF_POINT
 */
#define TAS2552_INFLECTION_MASK			(255 << 0)
#define TAS2552_INFLECTION_SHIFT		0
#define TAS2552_INFLECTION_WIDTH		8

/*
 * TAS2552_REG_0C_BAT_TRACK_SLOPE_CONTROL
 */
#define TAS2552_SLOPE_MASK			(255 << 0)
#define TAS2552_SLOPE_SHIFT			0
#define TAS2552_SLOPE_WIDTH			8

/*
 * TAS2552_REG_0E_LIMIT_ATTK_RATE
 */
#define TAS2552_HYSTERESIS_MASK			(3 << 6)
#define TAS2552_HYSTERESIS_SHIFT		6
#define TAS2552_HYSTERESIS_WIDTH		2
#define TAS2552_APT_DIS_VOLTAGE_MASK		(3 << 3)
#define TAS2552_APT_DIS_VOLTAGE_SHIFT		3
#define TAS2552_APT_DIS_VOLTAGE_WIDTH		2
#define TAS2552_ATTACK_TIME_MASK		(7 << 0)
#define TAS2552_ATTACK_TIME_SHIFT		0
#define TAS2552_ATTACK_TIME_WIDTH		3

/*
 * TAS2552_REG_0F_LIMIT_RELEASE_RATE
 */
#define TAS2552_REL_TIME_MASK			(15 << 9)
#define TAS2552_REL_TIME_SHIFT			9
#define TAS2552_REL_TIME_WIDTH			4

/*
 * TAS2552_REG_10_LIMIT_INTEG_CNT_CONTROL
 */
#define TAS2552_UP_DWN_RATIO_MASK		(3 << 6)
#define TAS2552_UP_DWN_RATIO_SHIFT		6
#define TAS2552_UP_DWN_RATIO_WIDTH		2
#define TAS2552_INT_CNT_MASK			(63 << 0)
#define TAS2552_INT_CNT_SHIFT			0
#define TAS2552_INT_CNT_WIDTH			6

/*
 * TAS2552_REG_11_PDM_CONFIG
 */
#define TAS2552_PDM_DATA_ES_MASK		(1 << 2)
#define TAS2552_PDM_DATA_ES_SHIFT		2
#define TAS2552_PDM_DATA_ES_WIDTH		1
#define TAS2552_PDM_CLK_SEL_MASK		(3 << 0)
#define TAS2552_PDM_CLK_SEL_SHIFT		0
#define TAS2552_PDM_CLK_SEL_WIDTH		2

/*
 * TAS2552_REG_12_PGA_GAIN
 */
#define TAS2552_PGA_GAIN_MASK			(15 << 0)
#define TAS2552_PGA_GAIN_SHIFT			0
#define TAS2552_PGA_GAIN_WIDTH			4

/*
 * TAS2552_REG_13_CLASS_D_EDGE_RATE
 */
#define TAS2552_GAINCOMP_EN_MASK		(1 << 7)
#define TAS2552_GAINCOMP_EN_SHIFT		7
#define TAS2552_GAINCOMP_EN_WIDTH		1
#define TAS2552_ERC_SEL_MASK			(7 << 4)
#define TAS2552_ERC_SEL_SHIFT			4
#define TAS2552_ERC_SEL_WIDTH			3

/*
 * TAS2552_REG_14_BOOST_AUTO_PASS_THRU
 */
#define TAS2552_APT_THRESHOLD_MASK		(3 << 2)
#define TAS2552_APT_THRESHOLD_SHIFT		2
#define TAS2552_APT_THRESHOLD_WIDTH		2
#define TAS2552_APT_DELAY_SEL_MASK		(3 << 0)
#define TAS2552_APT_DELAY_SEL_SHIFT		0
#define TAS2552_APT_DELAY_SEL_WIDTH		2

/*
 * TAS2552_REG_16_VERSION_NUMBER
 */
#define TAS2552_SILICON_VER_MASK		(15 << 0)
#define TAS2552_SILICON_VER_SHIFT		0
#define TAS2552_SILICON_VER_WIDTH		4

/*
 * TAS2552_REG_19_VBAT_DATA
 */
#define TAS2552_VBAT_MASK			(255 << 0)
#define TAS2552_VBAT_SHIFT			0
#define TAS2552_VBAT_WIDTH			8

/* Silicon Version */
#define TAS2552_VERSION				0x8

enum tas2552_type {
	TAS2552,
};

struct tas2552_priv {
	struct regmap *regmap;
	struct snd_soc_codec *codec;
	enum tas2552_type devtype;
	void *control_data;
	unsigned int dai_fmt;
};

#endif
