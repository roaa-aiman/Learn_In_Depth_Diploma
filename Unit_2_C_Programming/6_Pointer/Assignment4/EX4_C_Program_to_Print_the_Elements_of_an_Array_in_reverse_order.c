/*
 * EX4_C_Program_to_Print_the_Elements_of_an_Array_in_reverse_order.c
 *
 *  Created on: Oct 21, 2023
 *      Author: roaa aiman
 */
#include <stdio.h>
#include <string.h>
int main()
{
	int arr[15] , size;
	printf("Input the number of elements to store in the array (max 15) :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);
	printf("Input %d number of elements in the array:\n",size);
	for (int i =0 ;i<size ; i++)
	{
		printf("element - %d :",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for (int i=size-1 ;i>=0 ; i--)
	{
		printf("element - %d : %d \n",i+1,arr[i]);

	}
	return 0;
}

