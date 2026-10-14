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

#include "board.h"

//*****************************************************************************
//
// Board Configurations
// Initializes the rest of the modules.
// Call this function in your application if you wish to do all module
// initialization.
// If you wish to not use some of the initializations, instead of the
// Board_init use the individual Module_inits
//
//*****************************************************************************
void Board_init()
{
	EALLOW;

	PinMux_init();
	INPUTXBAR_init();
	SYNC_init();
	ADC_init();
	EPWM_init();
	EPWMXBAR_init();
	ETHERNET_init();
	// FLASH Initialization:
	// The "FLASH_init()" should be called after or during initialization functions like
	// Device_init() or Device_enableAllPeripherals().
	GPIO_init();
	MCAN_SYSCFG_init();
	SD_init();
	UART_init();
	XINT_init();

	EDIS;
}

//*****************************************************************************
//
// PINMUX Configurations
//
//*****************************************************************************
void PinMux_init()
{
	//
	// PinMux for modules assigned to CPU1
	//

	//
	// EPWM4 -> PhaseAPWM Pinmux
	//
	GPIO_setPinConfig(PhaseAPWM_EPWMA_PIN_CONFIG);
	GPIO_setPadConfig(PhaseAPWM_EPWMA_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(PhaseAPWM_EPWMA_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(PhaseAPWM_EPWMB_PIN_CONFIG);
	GPIO_setPadConfig(PhaseAPWM_EPWMB_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(PhaseAPWM_EPWMB_GPIO, GPIO_QUAL_SYNC);

	//
	// EPWM3 -> PhaseBPWM Pinmux
	//
	GPIO_setPinConfig(PhaseBPWM_EPWMA_PIN_CONFIG);
	GPIO_setPadConfig(PhaseBPWM_EPWMA_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(PhaseBPWM_EPWMA_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(PhaseBPWM_EPWMB_PIN_CONFIG);
	GPIO_setPadConfig(PhaseBPWM_EPWMB_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(PhaseBPWM_EPWMB_GPIO, GPIO_QUAL_SYNC);

	//
	// EPWM2 -> PhaseCPWM Pinmux
	//
	GPIO_setPinConfig(PhaseCPWM_EPWMA_PIN_CONFIG);
	GPIO_setPadConfig(PhaseCPWM_EPWMA_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(PhaseCPWM_EPWMA_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(PhaseCPWM_EPWMB_PIN_CONFIG);
	GPIO_setPadConfig(PhaseCPWM_EPWMB_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(PhaseCPWM_EPWMB_GPIO, GPIO_QUAL_SYNC);

	//
	// EPWM1 -> ResolverPWM Pinmux
	//
	GPIO_setPinConfig(ResolverPWM_EPWMA_PIN_CONFIG);
	GPIO_setPadConfig(ResolverPWM_EPWMA_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(ResolverPWM_EPWMA_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(ResolverPWM_EPWMB_PIN_CONFIG);
	GPIO_setPadConfig(ResolverPWM_EPWMB_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(ResolverPWM_EPWMB_GPIO, GPIO_QUAL_SYNC);

	//
	// ETHERNET -> myETHERNET0 Pinmux
	//
	GPIO_setPinConfig(myETHERNET0_ENETMDIO_CLK_PIN_CONFIG);
	GPIO_setPadConfig(myETHERNET0_ENETMDIO_CLK_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myETHERNET0_ENETMDIO_CLK_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(myETHERNET0_ENETMDIO_DATA_PIN_CONFIG);
	GPIO_setPadConfig(myETHERNET0_ENETMDIO_DATA_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myETHERNET0_ENETMDIO_DATA_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(myETHERNET0_ENETRMII_CLK_PIN_CONFIG);
	GPIO_setPadConfig(myETHERNET0_ENETRMII_CLK_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myETHERNET0_ENETRMII_CLK_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(myETHERNET0_ENETREVMII_MDIO_RST_PIN_CONFIG);
	GPIO_setPadConfig(myETHERNET0_ENETREVMII_MDIO_RST_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myETHERNET0_ENETREVMII_MDIO_RST_GPIO, GPIO_QUAL_ASYNC);

	// GPIO2 -> GD1_CS Pinmux
	GPIO_setPinConfig(GPIO_2_GPIO2);
	// GPIO3 -> GD2_CS Pinmux
	GPIO_setPinConfig(GPIO_3_GPIO3);
	// GPIO4 -> GD3_CS Pinmux
	GPIO_setPinConfig(GPIO_4_GPIO4);
	// GPIO5 -> GD4_CS Pinmux
	GPIO_setPinConfig(GPIO_5_GPIO5);
	// GPIO6 -> GD5_CS Pinmux
	GPIO_setPinConfig(GPIO_6_GPIO6);
	// GPIO7 -> GD6_CS Pinmux
	GPIO_setPinConfig(GPIO_7_GPIO7);
	// GPIO8 -> GD_Ready Pinmux
	GPIO_setPinConfig(GPIO_8_GPIO8);
	// GPIO9 -> GD_Fault Pinmux
	GPIO_setPinConfig(GPIO_9_GPIO9);
	// GPIO11 -> GD_Reset Pinmux
	GPIO_setPinConfig(GPIO_11_GPIO11);
	//
	// MCAN -> myMCAN0 Pinmux
	//
	GPIO_setPinConfig(myMCAN0_MCANRX_PIN_CONFIG);
	GPIO_setPadConfig(myMCAN0_MCANRX_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myMCAN0_MCANRX_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(myMCAN0_MCANTX_PIN_CONFIG);
	GPIO_setPadConfig(myMCAN0_MCANTX_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myMCAN0_MCANTX_GPIO, GPIO_QUAL_ASYNC);

	//
	// SD1 -> CurrentSenseSDFM Pinmux
	//
	GPIO_setPinConfig(CurrentSenseSDFM_SDC1_PIN_CONFIG);
	GPIO_setPadConfig(CurrentSenseSDFM_SDC1_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(CurrentSenseSDFM_SDC1_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(CurrentSenseSDFM_SDD1_PIN_CONFIG);
	GPIO_setPadConfig(CurrentSenseSDFM_SDD1_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(CurrentSenseSDFM_SDD1_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(CurrentSenseSDFM_SDC2_PIN_CONFIG);
	GPIO_setPadConfig(CurrentSenseSDFM_SDC2_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(CurrentSenseSDFM_SDC2_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(CurrentSenseSDFM_SDD2_PIN_CONFIG);
	GPIO_setPadConfig(CurrentSenseSDFM_SDD2_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(CurrentSenseSDFM_SDD2_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(CurrentSenseSDFM_SDC3_PIN_CONFIG);
	GPIO_setPadConfig(CurrentSenseSDFM_SDC3_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(CurrentSenseSDFM_SDC3_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(CurrentSenseSDFM_SDD3_PIN_CONFIG);
	GPIO_setPadConfig(CurrentSenseSDFM_SDD3_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(CurrentSenseSDFM_SDD3_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(CurrentSenseSDFM_SDC4_PIN_CONFIG);
	GPIO_setPadConfig(CurrentSenseSDFM_SDC4_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(CurrentSenseSDFM_SDC4_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(CurrentSenseSDFM_SDD4_PIN_CONFIG);
	GPIO_setPadConfig(CurrentSenseSDFM_SDD4_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(CurrentSenseSDFM_SDD4_GPIO, GPIO_QUAL_SYNC);

	//
	// UARTA -> myUART0 Pinmux
	//
	GPIO_setPinConfig(myUART0_UARTTX_PIN_CONFIG);
	GPIO_setPadConfig(myUART0_UARTTX_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myUART0_UARTTX_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(myUART0_UARTRX_PIN_CONFIG);
	GPIO_setPadConfig(myUART0_UARTRX_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(myUART0_UARTRX_GPIO, GPIO_QUAL_ASYNC);


}

//*****************************************************************************
//
// ADC Configurations
//
//*****************************************************************************
void ADC_init(){
	myADC0_init();
}

void myADC0_init(){
	//
	// Configures the analog-to-digital converter module prescaler.
	//
	ADC_setPrescaler(myADC0_BASE, ADC_CLK_DIV_1_0);
	//
	// Configures the analog-to-digital converter resolution and signal mode.
	//
	ADC_setMode(myADC0_BASE, ADC_RESOLUTION_12BIT, ADC_MODE_SINGLE_ENDED);
	//
	// Sets the timing of the end-of-conversion pulse
	//
	ADC_setInterruptPulseMode(myADC0_BASE, ADC_PULSE_END_OF_ACQ_WIN);
	//
	// Sets the timing of early interrupt generation.
	//
	ADC_setInterruptCycleOffset(myADC0_BASE, 0U);
	//
	// Powers up the analog-to-digital converter core.
	//
	ADC_enableConverter(myADC0_BASE);
	//
	// Delay for 1ms to allow ADC time to power up
	//
	DEVICE_DELAY_US(500);
	//
	// SOC Configuration: Setup ADC EPWM channel and trigger settings
	//
	// Disables SOC burst mode.
	//
	ADC_disableBurstMode(myADC0_BASE);
	//
	// Sets the priority mode of the SOCs.
	//
	ADC_setSOCPriority(myADC0_BASE, ADC_PRI_ALL_ROUND_ROBIN);
	//
	// Start of Conversion 0 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 0
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN0
	//	 	Sample Window	: 1 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC0_BASE, ADC_SOC_NUMBER0, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN0, 1U);
	ADC_setInterruptSOCTrigger(myADC0_BASE, ADC_SOC_NUMBER0, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 1 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 1
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN0
	//	 	Sample Window	: 1 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC0_BASE, ADC_SOC_NUMBER1, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN0, 1U);
	ADC_setInterruptSOCTrigger(myADC0_BASE, ADC_SOC_NUMBER1, ADC_INT_SOC_TRIGGER_NONE);
	//
	// Start of Conversion 2 Configuration
	//
	//
	// Configures a start-of-conversion (SOC) in the ADC and its interrupt SOC trigger.
	// 	  	SOC number		: 2
	//	  	Trigger			: ADC_TRIGGER_SW_ONLY
	//	  	Channel			: ADC_CH_ADCIN0
	//	 	Sample Window	: 1 SYSCLK cycles
	//		Interrupt Trigger: ADC_INT_SOC_TRIGGER_NONE
	//
	ADC_setupSOC(myADC0_BASE, ADC_SOC_NUMBER2, ADC_TRIGGER_SW_ONLY, ADC_CH_ADCIN0, 1U);
	ADC_setInterruptSOCTrigger(myADC0_BASE, ADC_SOC_NUMBER2, ADC_INT_SOC_TRIGGER_NONE);
}


//*****************************************************************************
//
// EPWM Configurations
//
//*****************************************************************************
void EPWM_init(){
    EPWM_setClockPrescaler(PhaseAPWM_BASE, EPWM_CLOCK_DIVIDER_1, EPWM_HSCLOCK_DIVIDER_2);	
    EPWM_setTimeBasePeriod(PhaseAPWM_BASE, 0);	
    EPWM_setTimeBaseCounter(PhaseAPWM_BASE, 0);	
    EPWM_setTimeBaseCounterMode(PhaseAPWM_BASE, EPWM_COUNTER_MODE_STOP_FREEZE);	
    EPWM_disablePhaseShiftLoad(PhaseAPWM_BASE);	
    EPWM_setPhaseShift(PhaseAPWM_BASE, 0);	
    EPWM_setCounterCompareValue(PhaseAPWM_BASE, EPWM_COUNTER_COMPARE_A, 0);	
    EPWM_setCounterCompareShadowLoadMode(PhaseAPWM_BASE, EPWM_COUNTER_COMPARE_A, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_setCounterCompareValue(PhaseAPWM_BASE, EPWM_COUNTER_COMPARE_B, 0);	
    EPWM_setCounterCompareShadowLoadMode(PhaseAPWM_BASE, EPWM_COUNTER_COMPARE_B, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_disableActionQualifierShadowLoadMode(PhaseAPWM_BASE, EPWM_ACTION_QUALIFIER_A);	
    EPWM_setActionQualifierAction(PhaseAPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(PhaseAPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(PhaseAPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(PhaseAPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(PhaseAPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(PhaseAPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_disableActionQualifierShadowLoadMode(PhaseAPWM_BASE, EPWM_ACTION_QUALIFIER_B);	
    EPWM_setActionQualifierAction(PhaseAPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(PhaseAPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(PhaseAPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(PhaseAPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(PhaseAPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(PhaseAPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_setRisingEdgeDelayCountShadowLoadMode(PhaseAPWM_BASE, EPWM_RED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableRisingEdgeDelayCountShadowLoadMode(PhaseAPWM_BASE);	
    EPWM_setFallingEdgeDelayCountShadowLoadMode(PhaseAPWM_BASE, EPWM_FED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableFallingEdgeDelayCountShadowLoadMode(PhaseAPWM_BASE);	
    EPWM_setDeadBandControlShadowLoadMode(PhaseAPWM_BASE, EPWM_DB_LOAD_ON_CNTR_ZERO);	
    EPWM_disableDeadBandControlShadowLoadMode(PhaseAPWM_BASE);	
    EPWM_setClockPrescaler(PhaseBPWM_BASE, EPWM_CLOCK_DIVIDER_1, EPWM_HSCLOCK_DIVIDER_2);	
    EPWM_setTimeBasePeriod(PhaseBPWM_BASE, 0);	
    EPWM_setTimeBaseCounter(PhaseBPWM_BASE, 0);	
    EPWM_setTimeBaseCounterMode(PhaseBPWM_BASE, EPWM_COUNTER_MODE_STOP_FREEZE);	
    EPWM_disablePhaseShiftLoad(PhaseBPWM_BASE);	
    EPWM_setPhaseShift(PhaseBPWM_BASE, 0);	
    EPWM_setCounterCompareValue(PhaseBPWM_BASE, EPWM_COUNTER_COMPARE_A, 0);	
    EPWM_setCounterCompareShadowLoadMode(PhaseBPWM_BASE, EPWM_COUNTER_COMPARE_A, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_setCounterCompareValue(PhaseBPWM_BASE, EPWM_COUNTER_COMPARE_B, 0);	
    EPWM_setCounterCompareShadowLoadMode(PhaseBPWM_BASE, EPWM_COUNTER_COMPARE_B, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_disableActionQualifierShadowLoadMode(PhaseBPWM_BASE, EPWM_ACTION_QUALIFIER_A);	
    EPWM_setActionQualifierAction(PhaseBPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(PhaseBPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(PhaseBPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(PhaseBPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(PhaseBPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(PhaseBPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_disableActionQualifierShadowLoadMode(PhaseBPWM_BASE, EPWM_ACTION_QUALIFIER_B);	
    EPWM_setActionQualifierAction(PhaseBPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(PhaseBPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(PhaseBPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(PhaseBPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(PhaseBPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(PhaseBPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_setRisingEdgeDelayCountShadowLoadMode(PhaseBPWM_BASE, EPWM_RED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableRisingEdgeDelayCountShadowLoadMode(PhaseBPWM_BASE);	
    EPWM_setFallingEdgeDelayCountShadowLoadMode(PhaseBPWM_BASE, EPWM_FED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableFallingEdgeDelayCountShadowLoadMode(PhaseBPWM_BASE);	
    EPWM_setDeadBandControlShadowLoadMode(PhaseBPWM_BASE, EPWM_DB_LOAD_ON_CNTR_ZERO);	
    EPWM_disableDeadBandControlShadowLoadMode(PhaseBPWM_BASE);	
    EPWM_setClockPrescaler(PhaseCPWM_BASE, EPWM_CLOCK_DIVIDER_1, EPWM_HSCLOCK_DIVIDER_2);	
    EPWM_setTimeBasePeriod(PhaseCPWM_BASE, 0);	
    EPWM_setTimeBaseCounter(PhaseCPWM_BASE, 0);	
    EPWM_setTimeBaseCounterMode(PhaseCPWM_BASE, EPWM_COUNTER_MODE_STOP_FREEZE);	
    EPWM_disablePhaseShiftLoad(PhaseCPWM_BASE);	
    EPWM_setPhaseShift(PhaseCPWM_BASE, 0);	
    EPWM_setCounterCompareValue(PhaseCPWM_BASE, EPWM_COUNTER_COMPARE_A, 0);	
    EPWM_setCounterCompareShadowLoadMode(PhaseCPWM_BASE, EPWM_COUNTER_COMPARE_A, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_setCounterCompareValue(PhaseCPWM_BASE, EPWM_COUNTER_COMPARE_B, 0);	
    EPWM_setCounterCompareShadowLoadMode(PhaseCPWM_BASE, EPWM_COUNTER_COMPARE_B, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_disableActionQualifierShadowLoadMode(PhaseCPWM_BASE, EPWM_ACTION_QUALIFIER_A);	
    EPWM_setActionQualifierAction(PhaseCPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(PhaseCPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(PhaseCPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(PhaseCPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(PhaseCPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(PhaseCPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_disableActionQualifierShadowLoadMode(PhaseCPWM_BASE, EPWM_ACTION_QUALIFIER_B);	
    EPWM_setActionQualifierAction(PhaseCPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(PhaseCPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(PhaseCPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(PhaseCPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(PhaseCPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(PhaseCPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_setRisingEdgeDelayCountShadowLoadMode(PhaseCPWM_BASE, EPWM_RED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableRisingEdgeDelayCountShadowLoadMode(PhaseCPWM_BASE);	
    EPWM_setFallingEdgeDelayCountShadowLoadMode(PhaseCPWM_BASE, EPWM_FED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableFallingEdgeDelayCountShadowLoadMode(PhaseCPWM_BASE);	
    EPWM_setDeadBandControlShadowLoadMode(PhaseCPWM_BASE, EPWM_DB_LOAD_ON_CNTR_ZERO);	
    EPWM_disableDeadBandControlShadowLoadMode(PhaseCPWM_BASE);	
    EPWM_setClockPrescaler(ResolverPWM_BASE, EPWM_CLOCK_DIVIDER_1, EPWM_HSCLOCK_DIVIDER_2);	
    EPWM_setTimeBasePeriod(ResolverPWM_BASE, 0);	
    EPWM_setTimeBaseCounter(ResolverPWM_BASE, 0);	
    EPWM_setTimeBaseCounterMode(ResolverPWM_BASE, EPWM_COUNTER_MODE_STOP_FREEZE);	
    EPWM_disablePhaseShiftLoad(ResolverPWM_BASE);	
    EPWM_setPhaseShift(ResolverPWM_BASE, 0);	
    EPWM_setCounterCompareValue(ResolverPWM_BASE, EPWM_COUNTER_COMPARE_A, 0);	
    EPWM_setCounterCompareShadowLoadMode(ResolverPWM_BASE, EPWM_COUNTER_COMPARE_A, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_setCounterCompareValue(ResolverPWM_BASE, EPWM_COUNTER_COMPARE_B, 0);	
    EPWM_setCounterCompareShadowLoadMode(ResolverPWM_BASE, EPWM_COUNTER_COMPARE_B, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_disableActionQualifierShadowLoadMode(ResolverPWM_BASE, EPWM_ACTION_QUALIFIER_A);	
    EPWM_setActionQualifierAction(ResolverPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(ResolverPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(ResolverPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(ResolverPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(ResolverPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(ResolverPWM_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_disableActionQualifierShadowLoadMode(ResolverPWM_BASE, EPWM_ACTION_QUALIFIER_B);	
    EPWM_setActionQualifierAction(ResolverPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    EPWM_setActionQualifierAction(ResolverPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    EPWM_setActionQualifierAction(ResolverPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    EPWM_setActionQualifierAction(ResolverPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    EPWM_setActionQualifierAction(ResolverPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    EPWM_setActionQualifierAction(ResolverPWM_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    EPWM_setRisingEdgeDelayCountShadowLoadMode(ResolverPWM_BASE, EPWM_RED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableRisingEdgeDelayCountShadowLoadMode(ResolverPWM_BASE);	
    EPWM_setFallingEdgeDelayCountShadowLoadMode(ResolverPWM_BASE, EPWM_FED_LOAD_ON_CNTR_ZERO);	
    EPWM_disableFallingEdgeDelayCountShadowLoadMode(ResolverPWM_BASE);	
    EPWM_setDeadBandControlShadowLoadMode(ResolverPWM_BASE, EPWM_DB_LOAD_ON_CNTR_ZERO);	
    EPWM_disableDeadBandControlShadowLoadMode(ResolverPWM_BASE);	
}

//*****************************************************************************
//
// EPWMXBAR Configurations
//
//*****************************************************************************
void EPWMXBAR_init(){
	myEPWMXBAR0_init();
}

void myEPWMXBAR0_init(){
		

}

//*****************************************************************************
//
// ETHERNET Configurations
//
//*****************************************************************************
void ETHERNET_init(){
	myETHERNET0_init();
}

void myETHERNET0_init(){
}

//*****************************************************************************
//
// FLASH Configurations
//
//*****************************************************************************
#ifdef __cplusplus
#pragma CODE_SECTION(".TI.ramfunc");
#else
#pragma CODE_SECTION(FLASH_init, ".TI.ramfunc");
#endif
void FLASH_init(){
    //
    // myFMC0 Initialization
    //
    //
    // This function sets the fallback power mode of the flash bank specified by
    // the bank parameter. The power mode is specified by the powerMode
    // parameter
    //

    //
    // Set available banks to active power mode
    //
    Flash_setBankPowerMode(myFMC0_BASE, FLASH_BANK, FLASH_BANK_PWR_ACTIVE);
    //
    // Sets the fallback power mode of the charge pump.
    //
    // Set pump power mode to active
    //
    Flash_setPumpPowerMode(myFMC0_BASE, FLASH_PUMP_PWR_ACTIVE);
    //
    // Disable cache and prefetch mechanism before changing wait states
    //
    Flash_disableCache(myFMC0_BASE);
    Flash_disablePrefetch(myFMC0_BASE);
    //
    // This function sets the number of wait states for a flash read access. The
    // waitstates parameter is a number between 0 and 15. It is important
    // to look at your device's datasheet for information about what the required
    // minimum flash wait-state is for your selected SYSCLK frequency.
    //
    // By default the wait state amount is configured to the maximum 15.
    //
    // Set flash wait states
    //
    Flash_setWaitstates(myFMC0_BASE, myFMC0_WAITSTATES);
    //
    // Enable prefetch
    //
    Flash_enablePrefetch(myFMC0_BASE);
    //
    // Enable cache
    //
    Flash_enableCache(myFMC0_BASE);
    //
    // Enables flash error correction code (ECC) protection.
    //
    Flash_enableECC(myFMC0_ECCBASE);
    //
    // Sets the single bit error threshold. Valid ranges are from 0-65535.
    //
    Flash_setErrorThreshold(myFMC0_ECCBASE, myFMC0_ERRORTHRESHOLD);
    //
    // Force a pipeline flush to ensure that the write to the last register
    // configured occurs before returning.
    //
    FLASH_DELAY_CONFIG;
}

//*****************************************************************************
//
// GPIO Configurations
//
//*****************************************************************************
void GPIO_init(){
	GD1_CS_init();
	GD2_CS_init();
	GD3_CS_init();
	GD4_CS_init();
	GD5_CS_init();
	GD6_CS_init();
	GD_Ready_init();
	GD_Fault_init();
	GD_Reset_init();
}

void GD1_CS_init(){
	GPIO_setPadConfig(GD1_CS, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(GD1_CS, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(GD1_CS, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(GD1_CS, GPIO_CORE_CPU1);
}
void GD2_CS_init(){
	GPIO_setPadConfig(GD2_CS, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(GD2_CS, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(GD2_CS, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(GD2_CS, GPIO_CORE_CPU1);
}
void GD3_CS_init(){
	GPIO_setPadConfig(GD3_CS, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(GD3_CS, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(GD3_CS, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(GD3_CS, GPIO_CORE_CPU1);
}
void GD4_CS_init(){
	GPIO_setPadConfig(GD4_CS, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(GD4_CS, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(GD4_CS, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(GD4_CS, GPIO_CORE_CPU1);
}
void GD5_CS_init(){
	GPIO_setPadConfig(GD5_CS, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(GD5_CS, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(GD5_CS, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(GD5_CS, GPIO_CORE_CPU1);
}
void GD6_CS_init(){
	GPIO_setPadConfig(GD6_CS, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(GD6_CS, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(GD6_CS, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(GD6_CS, GPIO_CORE_CPU1);
}
void GD_Ready_init(){
	GPIO_setPadConfig(GD_Ready, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(GD_Ready, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(GD_Ready, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(GD_Ready, GPIO_CORE_CPU1);
}
void GD_Fault_init(){
	GPIO_setPadConfig(GD_Fault, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(GD_Fault, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(GD_Fault, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(GD_Fault, GPIO_CORE_CPU1);
}
void GD_Reset_init(){
	GPIO_setPadConfig(GD_Reset, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(GD_Reset, GPIO_QUAL_SYNC);
	GPIO_setDirectionMode(GD_Reset, GPIO_DIR_MODE_IN);
	GPIO_setControllerCore(GD_Reset, GPIO_CORE_CPU1);
}

//*****************************************************************************
//
// INPUTXBAR Configurations
//
//*****************************************************************************
void INPUTXBAR_init(){
	myINPUTXBARINPUT0_init();
}

void myINPUTXBARINPUT0_init(){
	XBAR_setInputPin(INPUTXBAR_BASE, myINPUTXBARINPUT0_INPUT, myINPUTXBARINPUT0_SOURCE);
}

//*****************************************************************************
//
// MCAN Configurations
//
//*****************************************************************************
void MCAN_SYSCFG_init(){
    myMCAN0_init();
}

void myMCAN0_init(){
    MCAN_RevisionId revid_myMCAN0;
    MCAN_InitParams initParams_myMCAN0;
    MCAN_MsgRAMConfigParams    msgRAMConfigParams_myMCAN0;
    MCAN_BitTimingParams       bitTimes_myMCAN0;
    //
    // Initialize MCAN Init parameters.
    //
    initParams_myMCAN0.fdMode            = true;
    initParams_myMCAN0.brsEnable         = true;
    initParams_myMCAN0.txpEnable         = false;
    initParams_myMCAN0.efbi              = false;
    initParams_myMCAN0.pxhddisable       = false;
    initParams_myMCAN0.darEnable         = false;
    initParams_myMCAN0.wkupReqEnable     = false;
    initParams_myMCAN0.autoWkupEnable    = false;
    initParams_myMCAN0.emulationEnable   = false;
    initParams_myMCAN0.tdcEnable         = false;
    initParams_myMCAN0.wdcPreload        = 255;
    //
    // Transmitter Delay Compensation parameters.
    //
    initParams_myMCAN0.tdcConfig.tdcf    = 10;
    initParams_myMCAN0.tdcConfig.tdco    = 6;
    //
    // Initialize Message RAM Sections Configuration Parameters.
    //
    msgRAMConfigParams_myMCAN0.flssa                = myMCAN0_MCAN_STD_ID_FILT_START_ADDR;
    //
    // Standard ID Filter List Start Address.
    //
    msgRAMConfigParams_myMCAN0.lss                  = myMCAN0_MCAN_STD_ID_FILTER_NUM;
    //
    // List Size: Standard ID.
    //
    msgRAMConfigParams_myMCAN0.flesa                = myMCAN0_MCAN_EXT_ID_FILT_START_ADDR;
    //
    // Extended ID Filter List Start Address.
    //
    msgRAMConfigParams_myMCAN0.lse                  = myMCAN0_MCAN_EXT_ID_FILTER_NUM;
    //
    // List Size: Extended ID.
    //
    msgRAMConfigParams_myMCAN0.txStartAddr          = myMCAN0_MCAN_TX_BUFF_START_ADDR;
    //
    // Tx Buffers Start Address.
    //
    msgRAMConfigParams_myMCAN0.txBufNum             = myMCAN0_MCAN_TX_BUFF_SIZE;
    //
    // Number of Dedicated Transmit Buffers.
    //
    msgRAMConfigParams_myMCAN0.txFIFOSize           = 0;
    msgRAMConfigParams_myMCAN0.txBufMode            = 0;
    msgRAMConfigParams_myMCAN0.txBufElemSize        = 7;
    //
    // Tx Buffer Element Size.
    //
    msgRAMConfigParams_myMCAN0.txEventFIFOStartAddr = myMCAN0_MCAN_TX_EVENT_START_ADDR;
    //
    // Tx Event FIFO Start Address.
    //
    msgRAMConfigParams_myMCAN0.txEventFIFOSize      = myMCAN0_MCAN_TX_EVENT_SIZE;
    //
    // Event FIFO Size.
    //
    msgRAMConfigParams_myMCAN0.txEventFIFOWaterMark = 0;
    //
    // Level for Tx Event FIFO watermark interrupt.
    //
    msgRAMConfigParams_myMCAN0.rxFIFO0startAddr     = myMCAN0_MCAN_FIFO_0_START_ADDR;
    //
    // Rx FIFO0 Start Address.
    //
    msgRAMConfigParams_myMCAN0.rxFIFO0size          = myMCAN0_MCAN_FIFO_0_NUM;
    //
    // Number of Rx FIFO elements.
    //
    msgRAMConfigParams_myMCAN0.rxFIFO0waterMark     = 0; // Rx FIFO0 Watermark.
    msgRAMConfigParams_myMCAN0.rxFIFO0OpMode        = 0;
    msgRAMConfigParams_myMCAN0.rxFIFO1startAddr     = myMCAN0_MCAN_FIFO_1_START_ADDR;
    //
    // Rx FIFO1 Start Address.
    //
    msgRAMConfigParams_myMCAN0.rxFIFO1size          = myMCAN0_MCAN_FIFO_1_NUM;
    //
    // Number of Rx FIFO elements.
    //
    msgRAMConfigParams_myMCAN0.rxFIFO1waterMark     = 0; // Level for Rx FIFO 1
                                                  // watermark interrupt.
    msgRAMConfigParams_myMCAN0.rxFIFO1OpMode        = 0; // FIFO blocking mode.
    msgRAMConfigParams_myMCAN0.rxBufStartAddr       = myMCAN0_MCAN_RX_BUFF_START_ADDR;
    //
    // Rx Buffer Start Address.
    //
    msgRAMConfigParams_myMCAN0.rxBufElemSize        = 7;
    //
    // Rx Buffer Element Size.
    //
    msgRAMConfigParams_myMCAN0.rxFIFO0ElemSize      = 7;
    //
    // Rx FIFO0 Element Size.
    //
    msgRAMConfigParams_myMCAN0.rxFIFO1ElemSize      = 7;
    //
    // Rx FIFO1 Element Size.
    //
    //
    // Initialize bit timings.
    //
    bitTimes_myMCAN0.nomRatePrescalar   = 7; // Nominal Baud Rate Pre-scaler.
    bitTimes_myMCAN0.nomTimeSeg1        = 4; // Nominal Time segment before sample point.
    bitTimes_myMCAN0.nomTimeSeg2        = 3; // Nominal Time segment after sample point.
    bitTimes_myMCAN0.nomSynchJumpWidth  = 3; // Nominal (Re)Synchronization Jump Width Range.
    bitTimes_myMCAN0.dataRatePrescalar  = 3; // Data Baud Rate Pre-scaler.
    bitTimes_myMCAN0.dataTimeSeg1       = 4; // Data Time segment before sample point.
    bitTimes_myMCAN0.dataTimeSeg2       = 3; // Data Time segment after sample point.
    bitTimes_myMCAN0.dataSynchJumpWidth = 3; // Data (Re)Synchronization Jump Width.
    //
    // Get MCANSS Revision ID.
    //
    MCAN_getRevisionId(myMCAN0_BASE, &revid_myMCAN0);
    //
    // Wait for Memory initialization to be completed.
    //
    while(0 == MCAN_isMemInitDone(myMCAN0_BASE));
    //
    // Put MCAN in SW initialization mode.
    //
    MCAN_setOpMode(myMCAN0_BASE, MCAN_OPERATION_MODE_SW_INIT);
    //
    // Wait till MCAN is not initialized.
    //
    while (MCAN_OPERATION_MODE_SW_INIT != MCAN_getOpMode(myMCAN0_BASE));
    //
    // Initialize MCAN module.
    //
    MCAN_init(myMCAN0_BASE, &initParams_myMCAN0);
    //
    // Configure Bit timings.
    //
    MCAN_setBitTime(myMCAN0_BASE, &bitTimes_myMCAN0);
    //
    // Configure Message RAM Sections
    //
    MCAN_msgRAMConfig(myMCAN0_BASE, &msgRAMConfigParams_myMCAN0);
    //
    // Internal loopback mode
    //
    MCAN_lpbkModeEnable(myMCAN0_BASE, MCAN_LPBK_MODE_EXTERNAL, true);
    //
    // Take MCAN out of the SW initialization mode
    //
    MCAN_setOpMode(myMCAN0_BASE, MCAN_OPERATION_MODE_NORMAL);
    while (MCAN_OPERATION_MODE_NORMAL != MCAN_getOpMode(myMCAN0_BASE));
}

//*****************************************************************************
//
// SDFM Configurations
//
//*****************************************************************************
void SD_init() 
{
	CurrentSenseSDFM_init();
}
//****************************************
// CurrentSenseSDFM initialization
//****************************************
void CurrentSenseSDFM_init(void)
{
	//
	// Set modulator clock mode
	//
	SDFM_setupModulatorClock(CurrentSenseSDFM_BASE, SDFM_FILTER_1, SDFM_MODULATOR_CLK_EQUAL_DATA_RATE);
	SDFM_setupModulatorClock(CurrentSenseSDFM_BASE, SDFM_FILTER_2, SDFM_MODULATOR_CLK_EQUAL_DATA_RATE);
	SDFM_setupModulatorClock(CurrentSenseSDFM_BASE, SDFM_FILTER_3, SDFM_MODULATOR_CLK_EQUAL_DATA_RATE);
	SDFM_setupModulatorClock(CurrentSenseSDFM_BASE, SDFM_FILTER_4, SDFM_MODULATOR_CLK_EQUAL_DATA_RATE);
	//
	// Set Input Synchronizer
	//
	SDFM_enableSynchronizer(CurrentSenseSDFM_BASE, SDFM_FILTER_1, SDFM_CLOCK_SYNCHRONIZER | SDFM_DATA_SYNCHRONIZER);
	SDFM_enableSynchronizer(CurrentSenseSDFM_BASE, SDFM_FILTER_2, SDFM_CLOCK_SYNCHRONIZER | SDFM_DATA_SYNCHRONIZER);
	SDFM_enableSynchronizer(CurrentSenseSDFM_BASE, SDFM_FILTER_3, SDFM_CLOCK_SYNCHRONIZER | SDFM_DATA_SYNCHRONIZER);
	SDFM_enableSynchronizer(CurrentSenseSDFM_BASE, SDFM_FILTER_4, SDFM_CLOCK_SYNCHRONIZER | SDFM_DATA_SYNCHRONIZER);
	//
	// Selects clock source for SDFM channels
	//
	SDFM_selectClockSource(CurrentSenseSDFM_BASE, SDFM_FILTER_1, SDFM_CLK_SOURCE_SD1_CLK);
	SDFM_selectClockSource(CurrentSenseSDFM_BASE, SDFM_FILTER_2, SDFM_CLK_SOURCE_SD1_CLK);
	SDFM_selectClockSource(CurrentSenseSDFM_BASE, SDFM_FILTER_3, SDFM_CLK_SOURCE_SD1_CLK);
	SDFM_selectClockSource(CurrentSenseSDFM_BASE, SDFM_FILTER_4, SDFM_CLK_SOURCE_SD1_CLK);
} 	

//*****************************************************************************
//
// SYNC Scheme Configurations
//
//*****************************************************************************
void SYNC_init(){
	SysCtl_setSyncOutputConfig(SYSCTL_SYNC_OUT_SRC_EPWM1SYNCOUT);
	//
	// SOCA
	//
	SysCtl_enableExtADCSOCSource(0);
	//
	// SOCB
	//
	SysCtl_enableExtADCSOCSource(0);
}

//*****************************************************************************
//
// UART Configurations
//
//*****************************************************************************
void UART_init(){
    myUART0_init();
}

void myUART0_init(){
}

//*****************************************************************************
//
// XINT Configurations
//
//*****************************************************************************
void XINT_init(){
	GD_Fault_XINT_init();
}

void GD_Fault_XINT_init(){
	GPIO_setInterruptType(GD_Fault_XINT, GPIO_INT_TYPE_FALLING_EDGE);
	GPIO_setInterruptPin(GD_Fault, GD_Fault_XINT);
	GPIO_enableInterrupt(GD_Fault_XINT);
}

