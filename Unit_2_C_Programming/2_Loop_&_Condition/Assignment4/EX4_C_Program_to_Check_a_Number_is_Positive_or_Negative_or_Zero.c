/*
 ======================================================================================================================
 Name        : EX4_C_Program_to_Check_a_Number_is_Positive_or_Negative_or_Zero.c
 Author      : Roaa Aiman
 Created on	 : oct 5, 2021
 Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX4 C Program to check a number is positive or negative or zero
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include<stdio.h>

void main()
{
	float  Number ;
	printf("Enter the Number:");
	fflush(stdout);
	scanf("%f",&Number);
	if (Number>0)
	{
		printf("the number is positive \n");

	}

	else if (Number<0)
	{
		printf("the number is negative \n");

	}
	else
	{
		printf("the number is zero \n");

	}

}


