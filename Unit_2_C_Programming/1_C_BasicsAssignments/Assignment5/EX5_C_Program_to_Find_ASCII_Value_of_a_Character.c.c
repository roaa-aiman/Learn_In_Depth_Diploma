/*
 ======================================================================================================================
 Name        : EX5_C_Program_to_Find_ASCII_Value_of_a_Character.c
 Author      : Roaa Aiman
 Created on	 : oct 5, 2023
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX5 C Program to Find ASCII Value of a Character
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include<stdio.h>

void main()
{
	char c ;
	printf("Enter the character:");
	fflush(stdout);
	scanf("%c",&c);
	printf("The ASCII value of the character is %d\n",c);
}
