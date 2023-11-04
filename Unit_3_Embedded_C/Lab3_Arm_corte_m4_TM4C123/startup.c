/*	Cortex-M3_startup.c
*
*	CopyRight : Roaa aiman
*/

#include "Platform_Types.h"



extern int main(void);

void Reset_Hundler(void);

void Default_Hundler()
{
	Reset_Hundler();
}

void NMI_Handler(void)				__attribute__ ((weak, alias("Default_Hundler")));;
void H_Fault_Handler(void)			__attribute__ ((weak, alias("Default_Hundler")));;
void MM_Fault_Handler(void)			__attribute__ ((weak, alias("Default_Hundler")));;
void Bus_Fault(void)				__attribute__ ((weak, alias("Default_Hundler")));;
void Usage_Fault_Handler(void)		__attribute__ ((weak, alias("Default_Hundler")));;

static uint32_t _STACK_TOP[256];
void (* g_p_fn_vectors[]) ()  __attribute__ ((section(".vectors"))) = 
{
	(void (*) ())	((uint32_t)_STACK_TOP+sizeof(_STACK_TOP)),
	&Reset_Hundler,
	&NMI_Handler,
	&H_Fault_Handler,
	&MM_Fault_Handler,
	&Bus_Fault,
	&Usage_Fault_Handler
};

extern uint32_t _E_TEXT ;
extern uint32_t _S_DATA ;
extern uint32_t _E_DATA ;
extern uint32_t _S_BSS ;
extern uint32_t _E_BSS ;

void Reset_Hundler (void)
{
	//copy data from flash to RAM
	uint32_t DATA_Size = (uint8_t*)&_E_DATA - (uint8_t*)&_S_DATA ;
	uint8_t* P_src = (uint8_t*)&_E_TEXT ;
	uint8_t* P_dst = (uint8_t*)&_S_DATA ;
	
	for (int i = 0; i < DATA_Size; ++i)
		{
			*((uint8_t*)P_dst++) = *((uint8_t*)P_src++) ; 
		}

	// init the .bss with zero
	uint32_t BSS_Size = (uint8_t*)&_E_BSS - (uint8_t*)&_S_BSS ;
	P_dst = (uint8_t*)&_S_BSS ;

	for (int i = 0; i < BSS_Size; ++i)
		{
			*((uint8_t*)P_dst++) = (uint8_t)0 ; 
		}

	//jump to main 
	main();
}