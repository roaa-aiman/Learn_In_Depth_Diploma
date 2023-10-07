/*
 ======================================================================================================================
 * EX6_C_Program_to_Calculate_Sum_of_Natural_Numbers.c
 Author      : Roaa Aiman
 Created on	 : oct 5, 2021
 Description : Unit 2 C-Progtamming >> Assignment 6 C-Basic >> EX6_C_Program_to_Calculate_Sum_of_Natural_Numbers.c
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include<stdio.h>

void main()
{
	int n , sum = 0;
	printf("Enter the integer number:");
	fflush(stdout);
	scanf("%d",& n);
    int i ;
	for(i=0;i<=n;i++)
	{
	 sum+=i;
	}
   printf("the sum of natural number is %d",sum);
}



