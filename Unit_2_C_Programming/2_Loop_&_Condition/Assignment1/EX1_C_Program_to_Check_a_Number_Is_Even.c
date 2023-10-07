
 /*
  ======================================================================================================================
  Name        : EX1_C_Program_to_Check_a_Number_Is_Even.c
  Author      : Roaa Aiman
  Created on	 : oct 5, 2023
  Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX7 Swap Two Numbers Without Temp Variable
  	 	 	   using Ansi-style (c99)
  ======================================================================================================================
  */
 #include<stdio.h>

 void main()
 {
 	int  Number ;
 	printf("Enter the Number:");
 	fflush(stdout);
 	scanf("%d",&Number);
 	if(Number%2==0)
 	{
 		printf("The Number %d is even\n",Number);
 	}
 	else
 	{
 		printf("The Number %d is odd\n",Number);
 	}

 }


