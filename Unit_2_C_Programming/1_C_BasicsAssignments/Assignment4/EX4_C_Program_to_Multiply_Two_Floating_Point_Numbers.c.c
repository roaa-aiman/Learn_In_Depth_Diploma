/*
 ======================================================================================================================
 Name        : EX4_C_Program_to_Multiply_Two_Floating_Point_Numbers.c
 Author      : Roaa Aiman
 Created on	 : oct 5, 2023
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX4 C Program to Multiply two Floating Point
 	 	 	   Numbers using Ansi-style (c99)
 ======================================================================================================================
 */
#include<stdio.h>

void main()
{
	float Number1 , Number2 ;
	printf("Enter a Number1:");
	fflush(stdout);
	scanf("%f",&Number1);
	printf("Enter a Number2:");
	fflush(stdout);
	scanf("%f",&Number2);
	printf("The sum  of two integers is :%f\n",(Number1*Number2));
}


