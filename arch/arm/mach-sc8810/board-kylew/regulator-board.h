/*
 * Copyright (C) 2012 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ASM_ARCH_REGULATOR_SP8810GA_H
#define __ASM_ARCH_REGULATOR_SP8810GA_H


#include <linux/kernel.h>
#include <linux/regulator/machine.h>


/*macor-overrid file for regulator-devices.h.*/

#define REGU_NAMES_VDDCAMDA	REGULATOR_SUPPLY(REGU_NAME_CAMAVDD,	NULL),
#define REGU_NAMES_VDDCAMD0	REGULATOR_SUPPLY(REGU_NAME_CAMVIO,	NULL),
#define REGU_NAMES_VDDCAMD1	REGULATOR_SUPPLY(REGU_NAME_CAMDVDD,	NULL),
#define REGU_NAMES_VDDSIM3	REGULATOR_SUPPLY(REGU_NAME_LCD,		NULL),
#define REGU_NAMES_VDDRF1	REGULATOR_SUPPLY(REGU_NAME_SENSOR,	NULL),
#define REGU_NAMES_VDDWIF1	REGULATOR_SUPPLY(REGU_NAME_GPS,		NULL),\
				REGULATOR_SUPPLY(REGU_NAME_WIFI,        NULL),
#define REGU_NAMES_VDDSD0	REGULATOR_SUPPLY(REGU_NAME_SDHOST0,	NULL),
#define REGU_NAMES_VDDSIM2	REGULATOR_SUPPLY(REGU_NAME_TP,		NULL),
#define REGU_NAMES_VDDSIM1	REGULATOR_SUPPLY(REGU_NAME_TP1,		NULL),
#define REGU_NAMES_VDDUSB	REGULATOR_SUPPLY(REGU_NAME_USB,		NULL),
#define REGU_NAMES_VDDUSBD	REGULATOR_SUPPLY(REGU_NAME_USBD,	NULL),
#define REGU_NAMES_VDDSD1	REGULATOR_SUPPLY(REGU_NAME_WIFIIO,	NULL),
#define REGU_NAMES_VDD28	REGULATOR_SUPPLY(REGU_NAME_LCDIO,	NULL),

#ifndef REGU_INIT_VDDSD0
#define REGU_INIT_VDDSD0        \
        REGU_INIT_STATUS(LDO_VDDSD0,            LDO_INIT_ON,    0x5000,    LDO_INIT_SLP_OFF)
#endif

#ifndef REGU_INIT_VDDWIF0
#define REGU_INIT_VDDWIF0	\
	REGU_INIT_STATUS(LDO_VDDWIF0,		LDO_INIT_NA,	LDO_INIT_NA,	LDO_INIT_NA)
#endif

#endif

