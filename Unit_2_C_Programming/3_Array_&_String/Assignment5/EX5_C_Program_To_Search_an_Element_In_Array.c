/*
 * EX5_C_Program_To_Search_an_Element_In_Array.c
 *
 *  Created on: Oct 9, 2023
 *      Author: roaa aiman
 */
#include<stdio.h>

int main()
{
	int arr[100] ;
	int i ,n, Number;
	printf("Enter no of elements :");
	fflush(stdout);
	scanf("%d",&n);
	for (i=0 ; i<n ;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the element to be searched:");
	fflush(stdout);
	scanf("%d",&Number);

    // search element
	for (i=0; i<n;i++)
	{
      if(arr[i]==Number)
      {
    	  printf("Number found at the location = %d ",i+1);
    	  break;
      }
	}

	return 0 ;
}


