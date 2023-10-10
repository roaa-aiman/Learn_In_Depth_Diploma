/*
 * EX4_C_Program_to_Calculate_the_Power_of_a_Number_Using_Recursion.c
 *
 *  Created on: Oct 10, 2023
 *      Author: Roaa aiman
 */
#include <stdio.h>

int calcPower(int Number,int power);

int main()
{
	int Number,power;
	printf ("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &Number);

	printf ("Enter power number(Positive integer: ");			/* read and store the power from user */
	fflush(stdin);	fflush(stdout);
	scanf ("%d", &power);

	printf ("%d^%d = %d", Number, power, calcPower(Number, power));

	return 0;
}

/* ----------------------------------------------------------------------- */
/* ---------------------- Functions Definition ----------------------------*/
/* ----------------------------------------------------------------------- */

int calcPower(int Number,int power)
{

	if (power == 0)
		return 1;
	else if (power == 1)
		return Number;
	else
		return (Number * calcPower(Number, power-1));

}


