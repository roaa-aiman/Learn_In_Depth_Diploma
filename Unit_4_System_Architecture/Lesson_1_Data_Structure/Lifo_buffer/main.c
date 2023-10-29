/*
 * main.c
 *
 *  Created on: Oct 25, 2023
 *      Author: roaa aiman
 */
#include "lifo.h"
#include "Platform_Types.h"
#include <stdio.h>

#define LIFO_buf_length 5

LIFO_Buf_t LIFO_uart ,LIFO_I2C ;

uint32_t uart_buf[LIFO_buf_length];

int main(void)
{
	uint32_t i, temp=0;
    // static allocation
	LIFO_init(&LIFO_uart, uart_buf, LIFO_buf_length);
	//dynamic allocation
	//uint32_t* I2C_buf = (uint32_t*)malloc(LIFO_buf_length*sizeof(uint32_t));
	//LIFO_init(&LIFO_I2C, I2C_buf, LIFO_buf_length);

	printf("=========== LIFO push ========\n");
	for (i = 1; i < LIFO_buf_length+2; i++)
	{
		if(LIFO_push(&LIFO_uart, i) == LIFO_no_error)
		{
			printf("push %d in LIFO_uart passed\n",i);
		}
		else
		{
			printf("push %d in LIFO_uart failed\n",i);
		}
	}


	printf("\n=========== LIFO pop ========\n");
	for (i = 0; i < LIFO_buf_length; i++)
	{
		if(LIFO_pop(&LIFO_uart, &temp) == LIFO_no_error)
		{
			printf("pop %d in LIFO_uart passed\n",temp);
		}
		else
		{
			printf("pop %d in LIFO_uart failed\n",temp);
		}
	}

	return 0;
}

