/*
 * device_photoInterrupter.h
 *
 *  Created on: 2018. 9. 6.
 *      Author: leejh
 */

#ifndef DEVICE_PHOTOINTERRUPTER_H_
#define DEVICE_PHOTOINTERRUPTER_H_

/**	@defgroup Photo Interrupter TEST (Octopus Photo Interrupter Sensor) in STM32F072B_DISCOVERY
 * @{
 */
#include "stm32f0xx_hal.h"

typedef enum {
	PIS1 = 0
}PIS_TypeDef;	// PIS : Photo Interrupter Sensor

#define PISn						1

#define PIS1_PIN					GPIO_PIN_2
#define PIS1_GPIO_PORT				GPIOB
#define PIS1_GPIO_CLK_ENABLE()		__HAL_RCC_GPIOB_CLK_ENABLE()
#define PIS1_GPIO_CLK_DISABLE()		__HAL_RCC_GPIOB_CLK_DISABLE()
#define PIS1_EXTI_IRQn				EXTI2_3_IRQn

#define PISx_GPIO_CLK_ENABLE(__PIS__) do { if((__PIS__) == PIS1) PIS1_GPIO_CLK_ENABLE(); }while(0)

#define PISx_GPIO_CLK_DISABLE(__PIS__) (((__PIS__) == PIS1) ? PIS1_GPIO_CLK_DISABLE() : 0)

void PIS_Init(PIS_TypeDef pis);


#endif /* DEVICE_PHOTOINTERRUPTER_H_ */
