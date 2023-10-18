/*
 * EX2_C_Program_to_Calculate_Factorial_of_a_Number_Using_Recursion.c
 *
 *  Created on: Oct 10, 2023
 *      Author: Roaa Aiman
 */
#include <stdio.h>

int calcFactorial(int Number);

int main()
{
	int Number , Factorial=0;

	printf("Enter a positive number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d ", &Number);

	Factorial = calcFactorial(Number);

	printf("Factorial of %d = %d \n", Number, Factorial);

	return 0;
}

/* ---------------------- Functions Definition ----------------------------*/

int calcFactorial(int Number)
{
	if(Number == 1)
	{
		return 1;
	}
	else
	{
		return (Number * calcFactorial(Number-1));
	}

}

