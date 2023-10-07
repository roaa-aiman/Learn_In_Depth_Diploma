/*
 ======================================================================================================================
 Name        : EX7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable.c
 Author      : Roaa Aiman
 Created on	 : oct 5, 2023
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX7 Swap Two Numbers Without Temp Variable
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include<stdio.h>

void main()
{
	int  x ,y;
	printf("Enter the value of x:");
	fflush(stdout);
	scanf("%d",&x);
	printf("Enter the value of y:");
	fflush(stdout);
	scanf("%d",&y);
	x= x^y;
	y= x^y;
	x= y^x;
	printf("The  value of x after swaping %d\n",x);
	printf("The  value of y after swaping %d\n",y);
}


