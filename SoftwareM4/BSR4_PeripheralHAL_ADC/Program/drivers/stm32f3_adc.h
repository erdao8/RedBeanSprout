/* #include "stm32f3_adc.h" */

#ifndef __STM32F3_ADC_H
#define __STM32F3_ADC_H

#include "stm32f3xx_hal.h"
/*====================================================================================================*/
/*====================================================================================================*/
#define ADC_BUF_CHENNAL 3
#define ADC_BUF_SIZE    32

extern __IO uint16_t ADC_DMA_ConvBuf[ADC_BUF_SIZE][ADC_BUF_CHENNAL];
/*====================================================================================================*/
/*====================================================================================================*/
void ADC_Config( void );
void ADC_getAverage( uint16_t *pADC_data, uint8_t adcSample );
/*====================================================================================================*/
/*====================================================================================================*/
#endif	 