/*
 * EX5_C_Program_to_Find_Area_of_a_circle_by_Passing_Arguments_to_Macros.c
 *
 *  Created on: Oct 18, 2023
 *      Author: roaa aiman
 */
#define pi 3.1415
#define area(r) pi*r*r
#include <stdio.h>

int main()
{
	int r;
	float area ;
	printf("Enter the radius:");
	fflush (stdin); fflush(stdout);
	scanf("%d",&r);
	area = area(r);
	printf("Area = %.2f",area);
	return 0;
}

