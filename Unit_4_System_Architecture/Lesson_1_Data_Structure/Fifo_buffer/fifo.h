/*
 * fifo.h
 *
 *  Created on: Oct 25, 2023
 *      Author: roaa aiman
 */
#ifndef FIFO_H_
#define FIFO_H_
#include "Platform_Types.h"

// USER CONFIGRATION
//select the element type (unit8_t,unit16_t.unit32_t,....)
#define element_type uint8_t
//specify the buffer length
#define buffer_length 5
element_type buffer[buffer_length];

// structure  declaration
typedef struct{
	element_type length ;
	element_type count ;
	element_type* base ;
	element_type* head ;
	element_type* tail ;

}FIFO_Buf_t ;

// enumeration decleration
typedef enum
{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_Null
}FIFO_Status;

// function declaration
FIFO_Status FIFO_init (FIFO_Buf_t* Fifo_buf , element_type* buf,uint32_t length);
FIFO_Status FIFO_enqueue (FIFO_Buf_t* Fifo_buf , element_type item);
FIFO_Status FIFO_dequeue (FIFO_Buf_t* Fifo_buf , element_type* item);
FIFO_Status FIFO_IS_FULL (FIFO_Buf_t* Fifo_buf);
FIFO_Status FIFO_is_empty(FIFO_Buf_t *Fifo_buf);
void FIFO_Print(FIFO_Buf_t* Fifo_buf);

#endif


