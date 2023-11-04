#include "Platform_Types.h"
#include "uart.h"

uint8_t String_Buffer[100] = "Learn-in-depth: <Roaa>";
uint8_t const String_Buffer_C[100] = "Learn-in-depth: Roaa";

void main(void)
{
	Uart_Send_String(String_Buffer);
}