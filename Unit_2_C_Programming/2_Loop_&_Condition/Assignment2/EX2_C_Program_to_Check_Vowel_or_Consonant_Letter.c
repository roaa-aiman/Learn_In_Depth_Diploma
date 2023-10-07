/*
 ======================================================================================================================
 Name        : EX2_C_Program_to_Check_Vowel_or_Consonant_Letter.c
 Author      : Roaa Aiman
 Created on	 : oct 5, 2021
 Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX2 C Program to check vowel or consonant letter
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include<stdio.h>

 void main()
 {
 	char  C ;
 	printf("Enter the character:");
 	fflush(stdout);
 	scanf("%c",&C);
 	if(C=='A'||C=='a'||C=='E'||C=='e'||C=='I'||C=='i'||C=='O'||C=='o'||C=='U'||C=='u')
 	{
 		printf("The character %c is vowel\n",C);
 	}
 	else
 	{
 		printf("The character %c is consonant\n",C);
 	}

 }


