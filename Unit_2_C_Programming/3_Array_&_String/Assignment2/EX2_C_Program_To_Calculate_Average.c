/*
 * EX2_C_Program_To_Calculate_Average.c
 *
 *  Created on: Oct 10, 2023
 *      Author: roaa aiman
 */

#include<stdio.h>

int main()
{
	float arr[100],sum=0,avrage=0;
	int i ,n ;
	printf("Enter the numbers of data:");
	fflush(stdout);
	scanf("%d",&n);

	for (i=0 ; i<n;i++)
	{
		printf("Enter number:");
		fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];

	}

	avrage = sum / n;
	printf("Average = %.2f:\n",avrage);
return 0 ;
}



