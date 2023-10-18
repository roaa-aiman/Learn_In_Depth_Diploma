/*
 * main.c
 *
 *  Created on: Oct 13, 2023
 *      Author: roaa aiman
 */
#include <stdio.h>
void reverseArray(int arr1[],int arr2[],int size);
int main()
{

	int arr1[100] ,arr2[100];
	int size ;
	for(int i=0;i<2;i++)
	{
		printf("test case %d:\n",i+1);
		printf("input size of array:");
		fflush(stdout);
		scanf("%d",&size);
		printf("input array:");
		for(int i=0 ; i<size; i++)
		{
			scanf("%d",&arr1[i]);
		}

		reverseArray(arr1,arr2,size);

		printf("output array:");
		for(int i=0 ; i<size; i++)
		{
			printf("%d ", arr2[i]);
		}

	}
	return 0;
}
void reverseArray(int arr1[],int arr2[],int size)
{   int j = 0;
	for(int i=size-1;i>=0;i--)
	{
		arr2[j]=arr1[i];
		j++;
	}
}


