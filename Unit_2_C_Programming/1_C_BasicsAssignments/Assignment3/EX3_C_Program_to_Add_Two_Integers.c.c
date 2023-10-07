/*
 ======================================================================================================================
 Name        : EX3_C_Program_to_Add_Two_Integers.c
 Author      : Roaa Aiman
 Created on	 : oct 5, 2023
 Description :  Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX3 C Program to Add Two Integers using Ansi-style (c99)
 ======================================================================================================================
 */

#include<stdio.h>

void main()
{
	int Number1 , Number2 ;
	printf("Enter a intger1:");
	fflush(stdout);
	scanf("%d",&Number1);
	printf("Enter a intger2:");
	fflush(stdout);
	scanf("%d",&Number2);
	printf("The sum  of two integers is :%d\n",(Number1+Number2));
}



