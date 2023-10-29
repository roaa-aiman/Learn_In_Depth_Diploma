/*
 * lifo.c
 *
 *  Created on: Oct 25, 2023
 *      Author: roaa aiman
 */
#include "lifo.h"
#include "stdio.h"
#include "Platform_Types.h"
LIFO_Status LIFO_init (LIFO_Buf_t* lifo_buf , element_type* buf,uint32_t length)
{
	if (buf == NULL)
	{
		printf("LIFO initialization failed: NULL pointer \n");
		return LIFO_Null ;
	}


	lifo_buf->length = length ;
	lifo_buf->count = 0 ;
	lifo_buf-> base = buf ;
	lifo_buf-> head = buf;
	printf("LIFO initialization passed:\n\n");
	return LIFO_no_error;

}

LIFO_Status LIFO_push (LIFO_Buf_t* lifo_buf , element_type item)
{
	if (!lifo_buf-> base||!lifo_buf-> head)
	{
		printf("LIFO push failed: NULL pointer is passed\n");
		return LIFO_Null;
	}

	//Check Overflow
	if(LIFO_IS_FULL(lifo_buf) == LIFO_full)
	{
		printf("LIFO is full\n");
		return LIFO_full;
	}
	//Push new item
	*(lifo_buf-> head)= item ;
	lifo_buf-> head++;
	lifo_buf->count ++  ;
	return LIFO_no_error;

}
LIFO_Status LIFO_pop (LIFO_Buf_t* lifo_buf , element_type* item)
{
	if (!lifo_buf-> base||!lifo_buf-> head)
	{
		printf("LIFO pop failed: NULL is passed\n");
		return LIFO_Null;
	}

	if(LIFO_is_empty(lifo_buf) == LIFO_empty)
	{
		printf("LIFO pop failed: LIFO is empty\n");
		return LIFO_empty;
	}

	lifo_buf-> head--;
	*item = *(lifo_buf-> head) ;
	lifo_buf->count-- ;
	return LIFO_no_error;


}
LIFO_Status LIFO_IS_FULL (LIFO_Buf_t* lifo_buf)
{
	if (!lifo_buf-> base||!lifo_buf->head )
	{
		printf("LIFO is full failed: NULL is passed\n");
		return LIFO_Null;
	}

	if(lifo_buf->count == lifo_buf->length )
	{

		return LIFO_full;
	}

	return LIFO_no_error;

}

LIFO_Status LIFO_is_empty(LIFO_Buf_t *lifo_buf)
{
	// Check parameters validity
	if( lifo_buf->base == NULL || lifo_buf->head == NULL)
	{
		printf("LIFO is empty failed: NULL is passed\n");
		return LIFO_Null;
	}

	// Check if the number of items is zero
	if(lifo_buf->count == 0)
	{
		return LIFO_empty;
	}

	return LIFO_no_error;
}

void LIFO_Print(LIFO_Buf_t *lifo_buf)
{
    element_type* temp;
    int i;
    if(LIFO_is_empty(lifo_buf) == LIFO_empty)
    	{
    		printf("LIFO Dequeue failed: LIFO is empty\n");
    	}
    temp = lifo_buf->head;
    printf("\n======== Printing LIFO ========\n");
    for (i=0;i<lifo_buf->count;i++)
    {
        printf("\t %X \n",*temp);
        temp++;
    }
    printf("\n======== Print is Done ========\n");

}
