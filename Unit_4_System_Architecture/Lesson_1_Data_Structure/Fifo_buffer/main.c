/*
 * main.c
 *
 *  Created on: Oct 25, 2023
 *      Author: roaa aiman
 *
 */
#include <stdio.h>
#include <stdint.h>
#include "fifo.h"
#include "Platform_Types.h"

int main()
{
	element_type i, temp=0;
	FIFO_Buf_t Fifo_uart;
	FIFO_init(&Fifo_uart,buffer,buffer_length);
	for (i = 0; i<buffer_length+2 ; i++)
	{
		if( FIFO_enqueue(&Fifo_uart,i)==FIFO_no_error)
		{
			printf("enqueue %d in FIFO_uart passed\n",i);
		}
		else
		{
			printf("enqueue %d in FIFO_uart failed\n",i);
		}
	}

	FIFO_Print(&Fifo_uart);

	if(FIFO_dequeue(&Fifo_uart,&temp)==FIFO_no_error)
		printf("dequeue %d in FIFO_uart passed\n",temp);
	if(FIFO_dequeue(&Fifo_uart,&temp)==FIFO_no_error)
			printf("dequeue %d in FIFO_uart passed\n",temp);
	if(FIFO_dequeue(&Fifo_uart,&temp)==FIFO_no_error)
			printf("dequeue %d in FIFO_uart passed\n",temp);

	FIFO_Print(&Fifo_uart);

	return 0;
}

