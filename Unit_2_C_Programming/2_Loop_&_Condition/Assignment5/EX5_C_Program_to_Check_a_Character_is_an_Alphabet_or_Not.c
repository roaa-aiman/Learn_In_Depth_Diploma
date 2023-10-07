/*
 ======================================================================================================================
 * EX5_C_Program_to_Check_a_Character_is_an_Alphabet_or_Not.c
 Author      : Roaa Aiman
 Created on	 : oct 5, 2021
 Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX5_C_Program_to_Check_a_Character_is_an_Alphabet_or_Not
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include<stdio.h>

void main()
{
	char  c;
	printf("Enter the character:");
	fflush(stdout);
	scanf("%c",& c);

	if ((c>='a' && c<='z')||(c>='A' && c<='Z'))
	{
		printf("the character is an Alphabet \n");

	}

	else
	{
		printf("the character is not an Alphabet \n");

	}

}



