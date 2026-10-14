/*
 * Copyright (c) 2020 Texas Instruments Incorporated - http://www.ti.com
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef BOARD_H
#define BOARD_H

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

//
// Included Files
//

#include "driverlib.h"
#include "device.h"

//*****************************************************************************
//
// PinMux Configurations
//
//*****************************************************************************

//
// EPWM4 -> PhaseAPWM Pinmux
//
//
// EPWM4A - GPIO Settings
//
#define GPIO_PIN_EPWM4A 151
#define PhaseAPWM_EPWMA_GPIO 151
#define PhaseAPWM_EPWMA_PIN_CONFIG GPIO_151_EPWM4A
//
// EPWM4B - GPIO Settings
//
#define GPIO_PIN_EPWM4B 152
#define PhaseAPWM_EPWMB_GPIO 152
#define PhaseAPWM_EPWMB_PIN_CONFIG GPIO_152_EPWM4B

//
// EPWM3 -> PhaseBPWM Pinmux
//
//
// EPWM3A - GPIO Settings
//
#define GPIO_PIN_EPWM3A 149
#define PhaseBPWM_EPWMA_GPIO 149
#define PhaseBPWM_EPWMA_PIN_CONFIG GPIO_149_EPWM3A
//
// EPWM3B - GPIO Settings
//
#define GPIO_PIN_EPWM3B 150
#define PhaseBPWM_EPWMB_GPIO 150
#define PhaseBPWM_EPWMB_PIN_CONFIG GPIO_150_EPWM3B

//
// EPWM2 -> PhaseCPWM Pinmux
//
//
// EPWM2A - GPIO Settings
//
#define GPIO_PIN_EPWM2A 147
#define PhaseCPWM_EPWMA_GPIO 147
#define PhaseCPWM_EPWMA_PIN_CONFIG GPIO_147_EPWM2A
//
// EPWM2B - GPIO Settings
//
#define GPIO_PIN_EPWM2B 148
#define PhaseCPWM_EPWMB_GPIO 148
#define PhaseCPWM_EPWMB_PIN_CONFIG GPIO_148_EPWM2B

//
// EPWM1 -> ResolverPWM Pinmux
//
//
// EPWM1A - GPIO Settings
//
#define GPIO_PIN_EPWM1A 0
#define ResolverPWM_EPWMA_GPIO 0
#define ResolverPWM_EPWMA_PIN_CONFIG GPIO_0_EPWM1A
//
// EPWM1B - GPIO Settings
//
#define GPIO_PIN_EPWM1B 1
#define ResolverPWM_EPWMB_GPIO 1
#define ResolverPWM_EPWMB_PIN_CONFIG GPIO_1_EPWM1B

//
// ETHERNET -> myETHERNET0 Pinmux
//
//
// ENET_MDIO_CLK - GPIO Settings
//
#define GPIO_PIN_ENET_MDIO_CLK 105
#define myETHERNET0_ENETMDIO_CLK_GPIO 105
#define myETHERNET0_ENETMDIO_CLK_PIN_CONFIG GPIO_105_ENET_MDIO_CLK
//
// ENET_MDIO_DATA - GPIO Settings
//
#define GPIO_PIN_ENET_MDIO_DATA 106
#define myETHERNET0_ENETMDIO_DATA_GPIO 106
#define myETHERNET0_ENETMDIO_DATA_PIN_CONFIG GPIO_106_ENET_MDIO_DATA
//
// ENET_RMII_CLK - GPIO Settings
//
#define GPIO_PIN_ENET_RMII_CLK 73
#define myETHERNET0_ENETRMII_CLK_GPIO 73
#define myETHERNET0_ENETRMII_CLK_PIN_CONFIG GPIO_73_ENET_RMII_CLK
//
// ENET_REVMII_MDIO_RST - GPIO Settings
//
#define GPIO_PIN_ENET_REVMII_MDIO_RST 107
#define myETHERNET0_ENETREVMII_MDIO_RST_GPIO 107
#define myETHERNET0_ENETREVMII_MDIO_RST_PIN_CONFIG GPIO_107_ENET_REVMII_MDIO_RST
//
// GPIO2 - GPIO Settings
//
#define GD1_CS_GPIO_PIN_CONFIG GPIO_2_GPIO2
//
// GPIO3 - GPIO Settings
//
#define GD2_CS_GPIO_PIN_CONFIG GPIO_3_GPIO3
//
// GPIO4 - GPIO Settings
//
#define GD3_CS_GPIO_PIN_CONFIG GPIO_4_GPIO4
//
// GPIO5 - GPIO Settings
//
#define GD4_CS_GPIO_PIN_CONFIG GPIO_5_GPIO5
//
// GPIO6 - GPIO Settings
//
#define GD5_CS_GPIO_PIN_CONFIG GPIO_6_GPIO6
//
// GPIO7 - GPIO Settings
//
#define GD6_CS_GPIO_PIN_CONFIG GPIO_7_GPIO7
//
// GPIO8 - GPIO Settings
//
#define GD_Ready_GPIO_PIN_CONFIG GPIO_8_GPIO8
//
// GPIO9 - GPIO Settings
//
#define GD_Fault_GPIO_PIN_CONFIG GPIO_9_GPIO9
//
// GPIO11 - GPIO Settings
//
#define GD_Reset_GPIO_PIN_CONFIG GPIO_11_GPIO11

//
// MCAN -> myMCAN0 Pinmux
//
//
// MCAN_RX - GPIO Settings
//
#define GPIO_PIN_MCAN_RX 10
#define myMCAN0_MCANRX_GPIO 10
#define myMCAN0_MCANRX_PIN_CONFIG GPIO_10_MCAN_RX
//
// MCAN_TX - GPIO Settings
//
#define GPIO_PIN_MCAN_TX 19
#define myMCAN0_MCANTX_GPIO 19
#define myMCAN0_MCANTX_PIN_CONFIG GPIO_19_MCAN_TX

//
// SD1 -> CurrentSenseSDFM Pinmux
//
//
// SD1_C1 - GPIO Settings
//
#define GPIO_PIN_SD1_C1 123
#define CurrentSenseSDFM_SDC1_GPIO 123
#define CurrentSenseSDFM_SDC1_PIN_CONFIG GPIO_123_SD1_C1
//
// SD1_D1 - GPIO Settings
//
#define GPIO_PIN_SD1_D1 122
#define CurrentSenseSDFM_SDD1_GPIO 122
#define CurrentSenseSDFM_SDD1_PIN_CONFIG GPIO_122_SD1_D1
//
// SD1_C2 - GPIO Settings
//
#define GPIO_PIN_SD1_C2 125
#define CurrentSenseSDFM_SDC2_GPIO 125
#define CurrentSenseSDFM_SDC2_PIN_CONFIG GPIO_125_SD1_C2
//
// SD1_D2 - GPIO Settings
//
#define GPIO_PIN_SD1_D2 124
#define CurrentSenseSDFM_SDD2_GPIO 124
#define CurrentSenseSDFM_SDD2_PIN_CONFIG GPIO_124_SD1_D2
//
// SD1_C3 - GPIO Settings
//
#define GPIO_PIN_SD1_C3 127
#define CurrentSenseSDFM_SDC3_GPIO 127
#define CurrentSenseSDFM_SDC3_PIN_CONFIG GPIO_127_SD1_C3
//
// SD1_D3 - GPIO Settings
//
#define GPIO_PIN_SD1_D3 126
#define CurrentSenseSDFM_SDD3_GPIO 126
#define CurrentSenseSDFM_SDD3_PIN_CONFIG GPIO_126_SD1_D3
//
// SD1_C4 - GPIO Settings
//
#define GPIO_PIN_SD1_C4 129
#define CurrentSenseSDFM_SDC4_GPIO 129
#define CurrentSenseSDFM_SDC4_PIN_CONFIG GPIO_129_SD1_C4
//
// SD1_D4 - GPIO Settings
//
#define GPIO_PIN_SD1_D4 128
#define CurrentSenseSDFM_SDD4_GPIO 128
#define CurrentSenseSDFM_SDD4_PIN_CONFIG GPIO_128_SD1_D4

//
// UARTA -> myUART0 Pinmux
//
//
// UARTA_TX - GPIO Settings
//
#define GPIO_PIN_UARTA_TX 42
#define myUART0_UARTTX_GPIO 42
#define myUART0_UARTTX_PIN_CONFIG GPIO_42_UARTA_TX
//
// UARTA_RX - GPIO Settings
//
#define GPIO_PIN_UARTA_RX 43
#define myUART0_UARTRX_GPIO 43
#define myUART0_UARTRX_PIN_CONFIG GPIO_43_UARTA_RX

//*****************************************************************************
//
// ADC Configurations
//
//*****************************************************************************
#define myADC0_BASE ADCA_BASE
#define myADC0_RESULT_BASE ADCARESULT_BASE
#define myADC0_Resolver_EXC ADC_SOC_NUMBER0
#define myADC0_FORCE_Resolver_EXC ADC_FORCE_SOC0
#define myADC0_SAMPLE_WINDOW_Resolver_EXC 5
#define myADC0_TRIGGER_SOURCE_Resolver_EXC ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_Resolver_EXC ADC_CH_ADCIN0
#define myADC0_Resolver_COS ADC_SOC_NUMBER1
#define myADC0_FORCE_Resolver_COS ADC_FORCE_SOC1
#define myADC0_SAMPLE_WINDOW_Resolver_COS 5
#define myADC0_TRIGGER_SOURCE_Resolver_COS ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_Resolver_COS ADC_CH_ADCIN0
#define myADC0_Resolver_SIN ADC_SOC_NUMBER2
#define myADC0_FORCE_Resolver_SIN ADC_FORCE_SOC2
#define myADC0_SAMPLE_WINDOW_Resolver_SIN 5
#define myADC0_TRIGGER_SOURCE_Resolver_SIN ADC_TRIGGER_SW_ONLY
#define myADC0_CHANNEL_Resolver_SIN ADC_CH_ADCIN0
void myADC0_init();


//*****************************************************************************
//
// EPWM Configurations
//
//*****************************************************************************
#define PhaseAPWM_BASE EPWM4_BASE
#define PhaseAPWM_TBPRD 0
#define PhaseAPWM_COUNTER_MODE EPWM_COUNTER_MODE_STOP_FREEZE
#define PhaseAPWM_TBPHS 0
#define PhaseAPWM_CMPA 0
#define PhaseAPWM_CMPB 0
#define PhaseAPWM_CMPC 0
#define PhaseAPWM_CMPD 0
#define PhaseAPWM_DBRED 0
#define PhaseAPWM_DBFED 0
#define PhaseAPWM_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define PhaseAPWM_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define PhaseAPWM_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED
#define PhaseBPWM_BASE EPWM3_BASE
#define PhaseBPWM_TBPRD 0
#define PhaseBPWM_COUNTER_MODE EPWM_COUNTER_MODE_STOP_FREEZE
#define PhaseBPWM_TBPHS 0
#define PhaseBPWM_CMPA 0
#define PhaseBPWM_CMPB 0
#define PhaseBPWM_CMPC 0
#define PhaseBPWM_CMPD 0
#define PhaseBPWM_DBRED 0
#define PhaseBPWM_DBFED 0
#define PhaseBPWM_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define PhaseBPWM_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define PhaseBPWM_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED
#define PhaseCPWM_BASE EPWM2_BASE
#define PhaseCPWM_TBPRD 0
#define PhaseCPWM_COUNTER_MODE EPWM_COUNTER_MODE_STOP_FREEZE
#define PhaseCPWM_TBPHS 0
#define PhaseCPWM_CMPA 0
#define PhaseCPWM_CMPB 0
#define PhaseCPWM_CMPC 0
#define PhaseCPWM_CMPD 0
#define PhaseCPWM_DBRED 0
#define PhaseCPWM_DBFED 0
#define PhaseCPWM_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define PhaseCPWM_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define PhaseCPWM_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED
#define ResolverPWM_BASE EPWM1_BASE
#define ResolverPWM_TBPRD 0
#define ResolverPWM_COUNTER_MODE EPWM_COUNTER_MODE_STOP_FREEZE
#define ResolverPWM_TBPHS 0
#define ResolverPWM_CMPA 0
#define ResolverPWM_CMPB 0
#define ResolverPWM_CMPC 0
#define ResolverPWM_CMPD 0
#define ResolverPWM_DBRED 0
#define ResolverPWM_DBFED 0
#define ResolverPWM_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define ResolverPWM_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define ResolverPWM_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED

//*****************************************************************************
//
// EPWMXBAR Configurations
//
//*****************************************************************************
void myEPWMXBAR0_init();
#define myEPWMXBAR0 XBAR_TRIP4

//*****************************************************************************
//
// ETHERNET Configurations
//
//*****************************************************************************
void myETHERNET0_init();

//*****************************************************************************
//
// FLASH Configurations
//
//*****************************************************************************
#define myFMC0_BASE FLASH0CTRL_BASE
#define myFMC0_ECCBASE FLASH0ECC_BASE
#define myFMC0_WAITSTATES 3
#define myFMC0_ERRORTHRESHOLD 0

//*****************************************************************************
//
// GPIO Configurations
//
//*****************************************************************************
#define GD1_CS 2
void GD1_CS_init();
#define GD2_CS 3
void GD2_CS_init();
#define GD3_CS 4
void GD3_CS_init();
#define GD4_CS 5
void GD4_CS_init();
#define GD5_CS 6
void GD5_CS_init();
#define GD6_CS 7
void GD6_CS_init();
#define GD_Ready 8
void GD_Ready_init();
#define GD_Fault 9
void GD_Fault_init();
#define GD_Reset 11
void GD_Reset_init();

//*****************************************************************************
//
// INPUTXBAR Configurations
//
//*****************************************************************************
#define myINPUTXBARINPUT0_SOURCE 9
#define myINPUTXBARINPUT0_INPUT XBAR_INPUT4
void myINPUTXBARINPUT0_init();

//*****************************************************************************
//
// MCAN Configurations
//
//*****************************************************************************
#define myMCAN0_BASE MCANA_DRIVER_BASE
//
// Defines
//
#define myMCAN0_MCAN_STD_ID_FILTER_NUM          (1)
#define myMCAN0_MCAN_EXT_ID_FILTER_NUM          (1)
#define myMCAN0_MCAN_FIFO_0_NUM                 (0)
#define myMCAN0_MCAN_FIFO_1_NUM                 (0)
#define myMCAN0_MCAN_TX_BUFF_SIZE               (0)
#define myMCAN0_MCAN_TX_EVENT_SIZE              (0)

#define myMCAN0_MCAN_STD_ID_FILT_START_ADDR     (0)
#define myMCAN0_MCAN_EXT_ID_FILT_START_ADDR     (48)
#define myMCAN0_MCAN_FIFO_0_START_ADDR          (548)
#define myMCAN0_MCAN_FIFO_1_START_ADDR          (748)
#define myMCAN0_MCAN_RX_BUFF_START_ADDR         (948)
#define myMCAN0_MCAN_TX_BUFF_START_ADDR         (148)
#define myMCAN0_MCAN_TX_EVENT_START_ADDR        (255)

void myMCAN0_init();

//*****************************************************************************
//
// SDFM Configurations
//
//*****************************************************************************
#define SDFM_HTLZ_ENABLE  0x8000 //High Threshold (Z) enabled
#define SDFM_HTLZ_DISABLE 0x0000 //High Threshold (Z) disabled
 
#define CurrentSenseSDFM_BASE SDFM1_BASE
void    CurrentSenseSDFM_init(void);

//*****************************************************************************
//
// SYNC Scheme Configurations
//
//*****************************************************************************

//*****************************************************************************
//
// UART Configurations
//
//*****************************************************************************


void    myUART0_init();

//*****************************************************************************
//
// XINT Configurations
//
//*****************************************************************************
#define GD_Fault_XINT GPIO_INT_XINT1
#define GD_Fault_XINT_TYPE GPIO_INT_TYPE_FALLING_EDGE
void GD_Fault_XINT_init();

//*****************************************************************************
//
// Board Configurations
//
//*****************************************************************************
void	Board_init();
void	ADC_init();
void	EPWM_init();
void	EPWMXBAR_init();
void	ETHERNET_init();
void	FLASH_init();
void	GPIO_init();
void	INPUTXBAR_init();
void	MCAN_SYSCFG_init();
void	SD_init();
void	SYNC_init();
void	UART_init();
void	XINT_init();
void	PinMux_init();

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif  // end of BOARD_H definition
