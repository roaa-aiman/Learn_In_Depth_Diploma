/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Print_a_Integer_Entered_by_a_User.c
 Author      : Roaa Aiman
 Created on	 : oct 5, 2023
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX2 C Program To Print a Integer Entered by a User using Ansi-style (c99)
 ======================================================================================================================
 */

#include<stdio.h>

void main()
{
	int Number;
	printf("Enter a intger:");
	fflush(stdout);
	scanf("%d",&Number);
	printf("You entered:%d\n",Number);
}
