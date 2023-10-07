/*
 ======================================================================================================================
 Name        : EX3_C_Program_to_Find_The_Largest_Number.c
 Author      : Roaa Aiman
 Created on	 : oct 5, 2021
 Description :  Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX3 C Program to find the largest number
 	 	 	   using Ansi-style (c99))
 ======================================================================================================================
 */
#include<stdio.h>

void main()
{
	float  Number1 , Number2 , Number3 , max ;
	printf("Enter the Number1:");
	fflush(stdout);
	scanf("%f",&Number1);
	printf("Enter the Number2:");
	fflush(stdout);
	scanf("%f",&Number2);
	printf("Enter the Number3:");
	fflush(stdout);
	scanf("%f",&Number3);
	max = ((Number1>Number2)?((Number1>Number3)?Number1:Number3):((Number2>Number3)?Number2:Number3));
	printf("the maximum number of the three Numbers is %.2f",max);

}
