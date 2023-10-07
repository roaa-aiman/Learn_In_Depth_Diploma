/*
 ======================================================================================================================
 Name        : EX6_C_Program_to_Swap_Two_Numbers.c
 Author      : Roaa Aiman
 Created on	 : oct 5, 2023
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX6 C Program to Swap Two Numbers
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include<stdio.h>

void main()
{
	int  x ,y,temp ;
	printf("Enter the value of x:");
	fflush(stdout);
	scanf("%d",&x);
	printf("Enter the value of y:");
	fflush(stdout);
	scanf("%d",&y);
	temp =x;
	x=y;
	y=temp;
	printf("The  value of x after swaping %d\n",x);
	printf("The  value of y after swaping %d\n",y);
}

