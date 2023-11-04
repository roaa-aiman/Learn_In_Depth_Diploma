/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Roaa Aiman 
 * @brief          : toggle led on STM32F103C6UX_FLASH chip 
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
#define RCC_BASE 			0x40021000
#define GPIOA_BASE 			0x40010800

#define RCC_APB2ENR 		*((vuint32_t*) (RCC_BASE + 0x18))
#define GPIOA_CRH 			*((vuint32_t*) (GPIOA_BASE + 0x04))
#define GPIOA_ODR 			*((vuint32_t*) (GPIOA_BASE + 0x0C))

/* bit fields*/
typedef union
{
	vuint32_t All_Fields;
	struct
	{
		vuint32_t reserved:13;
		vuint32_t p_13:1;
	}pin;
}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIOA_BASE + 0x0C);

int main(void)
{
	SET_BIT( RCC_APB2ENR  , 2); // Enable clock RCC
	CLR_BIT( GPIOA_CRH , 20);// set 2 in bit 20/21/22/23
	SET_BIT( GPIOA_CRH , 21);
	CLR_BIT( GPIOA_CRH , 22);
	CLR_BIT( GPIOA_CRH , 23);

	while(1)
	{
 // Set port a pin 13
        SET_BIT( GPIOA_ODR , 13);
		//R_ODR->pin.p_13 = 1;
		for(int i = 0 ;i < 500 ; i++);
// Clear port a pin 13
		CLR_BIT( GPIOA_ODR , 13);
		//R_ODR->pin.p_13 = 0;
		for(int i = 0 ;i < 500 ; i++);
	}

	return 0;
}
