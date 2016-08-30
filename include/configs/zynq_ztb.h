/*
 * (C) Copyright 2013 Xilinx, Inc.
 *
 * Configuration for Zynq Evaluation and Development Board - Z-Turn (based on ZedBoard)
 * See zynq-common.h for Zynq common configs
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_ZYNQ_ZTB_H
#define __CONFIG_ZYNQ_ZTB_H

#define CONFIG_SYS_NO_FLASH
#define CONFIG_ZYNQ_USB

#define	PHYS_SDRAM_1_SIZE	(1024 * 1024 * 1024)
#define CONFIG_NET_MULTI
#define CONFIG_ZYNQ_GEM0
#define CONFIG_ZYNQ_GEM_PHY_ADDR0	7
#define CONFIG_ZYNQ_SDHCI0
#define CONFIG_ZYNQ_BOOT_FREEBSD

#include <configs/zynq-common.h>

#endif /* __CONFIG_ZYNQ_ZTB_H */
