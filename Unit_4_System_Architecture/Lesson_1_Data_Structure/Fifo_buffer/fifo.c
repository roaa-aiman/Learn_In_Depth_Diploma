/*
 * fifo.c
 *
 *  Created on: Oct 25, 2023
 *      Author: roaa aiman
 */
#include "fifo.h"
#include "Platform_Types.h"
FIFO_Status FIFO_init (FIFO_Buf_t* Fifo_buf , element_type* buf,uint32_t length)
{
	if (buf == NULL)
	{
		printf("LIFO initialization failed: NULL pointer \n");
		return FIFO_Null ;
	}
	Fifo_buf->length = length ;
	Fifo_buf->count = 0 ;
	Fifo_buf-> base = buf ;
	Fifo_buf-> head = buf;
	Fifo_buf-> tail = buf;
	printf("LIFO initialization passed:\n\n");
	return FIFO_no_error;
}
FIFO_Status FIFO_enqueue (FIFO_Buf_t* Fifo_buf , element_type item)
{
	if (!Fifo_buf-> base||!Fifo_buf->head ||!Fifo_buf->tail)
	{
		printf("FIFO enqueue failed: NULL pointer is passed\n");
		return FIFO_Null;
	}
	//Check Overflow
	if(FIFO_IS_FULL(Fifo_buf) == FIFO_full)
	{
		printf("FIFO is full\n");
		return FIFO_full;
	}

	*(Fifo_buf-> head)= item ;
	if (Fifo_buf->head == (Fifo_buf->base +( Fifo_buf->length*sizeof(element_type))))// Check if the head in the end of fifo to start from base agian
	{
		Fifo_buf->head = Fifo_buf->base;
	}
	else
	{
		Fifo_buf->head++;
	}
	Fifo_buf->count ++  ;
	return FIFO_no_error;
}
FIFO_Status FIFO_dequeue (FIFO_Buf_t* Fifo_buf , element_type* item)
{
	if (!Fifo_buf-> base||!Fifo_buf-> head)
	{
		printf("FIFO Dequeue failed: NULL is passed\n");
		return FIFO_Null;
	}

	if(FIFO_is_empty(Fifo_buf) == FIFO_empty)
	{
		printf("FIFO Dequeue failed: FIFO is empty\n");
		return FIFO_empty;
	}

	*item = *(Fifo_buf->tail);

	if(Fifo_buf->tail == (Fifo_buf->base + ( Fifo_buf->length*sizeof(element_type))))
	{
		Fifo_buf->tail = Fifo_buf->base;
	}
	else
	{
		Fifo_buf->tail++;
	}

	Fifo_buf->count--;
	return FIFO_no_error;
}
FIFO_Status FIFO_IS_FULL (FIFO_Buf_t* Fifo_buf)
{
	if (!Fifo_buf-> base||!Fifo_buf->head ||!Fifo_buf->tail)
	{
		printf("FIFO is full failed: NULL is passed\n");
		return FIFO_Null;
	}
	if(Fifo_buf->count == Fifo_buf->length )
		return FIFO_full;
	return FIFO_no_error;

}

FIFO_Status FIFO_is_empty(FIFO_Buf_t *Fifo_buf)
{
	// Check parameters validity
	if( Fifo_buf->base == NULL || Fifo_buf->head == NULL)
	{
		printf("FIFO is empty failed: NULL is passed\n");
		return FIFO_Null;
	}

	// Check if the number of items is zero
	if(Fifo_buf->count == 0)
	{
		return FIFO_empty;
	}

	return FIFO_no_error;
}

void FIFO_Print(FIFO_Buf_t* Fifo_buf)
{
    element_type* temp;
    int i;
    if(FIFO_is_empty(Fifo_buf) == FIFO_empty)
    	{
    		printf("FIFO Dequeue failed: FIFO is empty\n");
    	}
    temp = Fifo_buf->tail;
    printf("\n======== Printing FIFO ========\n");
    for (i=0;i<Fifo_buf->count;i++)
    {
        printf("\t %X \n",*temp);
        temp++;
    }
    printf("\n======== Print is Done ========\n");

}
