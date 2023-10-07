/*
 ======================================================================================================================
 * EX7_C_Program_to_Find_Factorial_of_a_Number.c
 Author      : Roaa Aiman
 Created on	 : oct 5, 2021
 Description : Unit 2 C-Progtamming >> Assignment 7 C-Basic >>EX7_C_Program_to_Find_Factorial_of_a_Number
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>

int main() {
	int n, i = 1, factorial = 1;

	printf("Enter the Number: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n < 0)
	{
		printf("Error!! Factorial of negative number doesn't exist\n");
	}
	else
	{
		do
		{
			factorial *= i;
			i++;
		} while (i <= n);

		printf("The factorial of number %d is %d\n", n, factorial);
	}

	return 0;
}










