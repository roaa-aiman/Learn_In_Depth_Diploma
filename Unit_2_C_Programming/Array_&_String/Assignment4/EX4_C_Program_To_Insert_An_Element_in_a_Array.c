/*
 * EX4_C_Program_To_Insert_An_Element_in_a_Array.c
 *
 *  Created on: Oct 9, 2023
 *      Author: roaa aiman
 *
 */
#include<stdio.h>

int main()
{
	int arr[100] ;
	int i ,j ,n , Number,position;
	printf("Enter no of elements :");
	fflush(stdout);
	scanf("%d",&n);
	printf("\n");
	for (i=0 ; i<n ;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\n  Enter the element to be inserted:");
	fflush(stdout);
	scanf("%d",&Number);

	printf("\n  Enter the location:");
	fflush(stdout);
	scanf("%d",&position);
    // insert element
	for (i=n; i>=position;i--)
	{
      arr[i]=arr[i-1];

	}
    arr[position-1]=Number;
	/* Printing new array */
	for (i = 0; i < n+1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;

	return 0 ;
}


