/*
 * lifo.h
 *
 *  Created on: Oct 25, 2023
 *      Author: roaa aiman
 */
#ifndef LIFO_H_
#define LIFO_H_
#include "Platform_Types.h"

//select the element type (unit8_t,unit16_t.unit32_t,....)
#define element_type uint32_t

// structure  declaration

typedef struct{
	element_type length ;
	element_type count ;
	element_type* base ;
	element_type* head ;

}LIFO_Buf_t ;

// enumeration decleration
typedef enum
{
	LIFO_no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_Null
}LIFO_Status;

// function declaration
LIFO_Status LIFO_init (LIFO_Buf_t* lifo_buf , element_type* buf,uint32_t length);
LIFO_Status LIFO_push (LIFO_Buf_t* lifo_buf , element_type item);
LIFO_Status LIFO_pop (LIFO_Buf_t* lifo_buf , element_type* item);
LIFO_Status LIFO_IS_FULL (LIFO_Buf_t* lifo_buf);
LIFO_Status LIFO_is_empty(LIFO_Buf_t *lifo_buf);
void LIFO_Print(LIFO_Buf_t *lifo_buf);
#endif
