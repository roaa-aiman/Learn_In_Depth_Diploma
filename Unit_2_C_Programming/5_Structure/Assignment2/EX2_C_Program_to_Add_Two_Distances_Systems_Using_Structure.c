/*
 * EX2_C_Program_to_Add_Two_Distances_Systems_Using_Structure.c
 *
 *  Created on: Oct 16, 2023
 *      Author: roaa aiman
 */
#include <stdio.h>

struct S_Distance
{
	int feet;
	float inch;
}d1,d2,sum;
struct S_Distance AddDistances (struct S_Distance d1, struct S_Distance d2);
int main()
{
	printf("Enter information of 1st distance:\n");
	printf("Enter feet:");
	fflush (stdin); fflush(stdout);
	scanf("%d",&d1.feet);
	printf("Enter inch:");
	fflush (stdin); fflush(stdout);
	scanf("%f",&d1.inch);
	printf("Enter information of 2st distance:\n");
	printf("Enter feet:");
	fflush (stdin); fflush(stdout);
	scanf("%d",&d2.feet);
	printf("Enter inch:");
	fflush (stdin); fflush(stdout);
	scanf("%f",&d2.inch);
	sum = AddDistances (d1, d2);
	printf("Sum of distance = %d \'-%.1f\"\n",sum.feet,sum.inch);

	return 0;
}
struct S_Distance AddDistances (struct S_Distance d1, struct S_Distance d2)
{
	struct S_Distance Result;

	Result.feet = d1.feet + d2.feet ;
	Result.inch = d1.inch + d2.inch;

	while(Result.inch >= 12)
	{
		Result.inch = Result.inch - 12.0;
		++Result.feet;
	}

	return Result ;
}

