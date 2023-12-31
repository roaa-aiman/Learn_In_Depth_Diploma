/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Toggle led with cortex_m4  tivac mcu
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include"Platform_Types.h"
#include"BIT_MATH.h"

/* register address */
#define SYSCTL_BASE 		0x400FE000
#define GPIO_PORTF_BASE 	0x40025000

#define SYSCTL_RCGC2_R		*((vuint32_t*) (SYSCTL_BASE + 0x108))
#define GPIO_PORTF_DIR_R 	*((vuint32_t*) (GPIO_PORTF_BASE + 0x400))
#define GPIO_PORTF_DEN_R	*((vuint32_t*) (GPIO_PORTF_BASE + 0x51c))
#define GPIO_PORTF_DATA_R	*((vuint32_t*) (GPIO_PORTF_BASE + 0x3FC))


int main(void)
{
	  SYSCTL_RCGC2_R = 0X20;
		//delay to make sure GPIO up and running
		for(int i = 0 ;i < 20000 ; i++);
		SET_BIT( GPIO_PORTF_DIR_R, 3);
		SET_BIT( GPIO_PORTF_DIR_R, 3);
		
	while(1)
	{
        
        SET_BIT( GPIO_PORTF_DATA_R, 3);		for(int i = 0 ;i < 20000 ; i++);
		CLR_BIT( GPIO_PORTF_DATA_R, 3);
		for(int i = 0 ;i < 20000 ; i++);
	}

	return 0;
}
