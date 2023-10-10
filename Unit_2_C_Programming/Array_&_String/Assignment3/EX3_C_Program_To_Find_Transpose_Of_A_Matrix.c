/*
 * EX3_C_Program_To_Find_Transpose_Of_A_Matrix.c
 *
 *  Created on: Oct 9, 2023
 *      Author: SMART
 */

#include<stdio.h>

void main()
{
	int arr1[100][100], arr2[100][100] ;
	int i ,j ,r,c;

	printf("Enter numbers of rows of the matrix:");
	fflush(stdout);
	scanf("%d",&r);
	printf("Enter numbers of colums of the matrix:");
	fflush(stdout);
	scanf("%d",&c);

	printf("Enter elements of matrix:\n");
	for (i=0 ; i<r;i++)
	{
		for(j=0;j<c;j++)
		{

			printf("Enter elements a%d%d:",i+1,j+1);
			fflush(stdout);
			scanf("%d",&arr1[i][j]);
		}
	}

	printf("\nEntered matrix:\n");
	for (i=0 ; i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d   ",arr1[i][j]);
			if(j==c-1)
			printf("\n\n");

		}
	}


	for (i=0 ; i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			arr2[i][j]=  arr1[j][i];
		}
	}

	printf("\nTranspos of Matrix :\n");
	for (i=0 ; i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d    ",arr2[i][j]);
			if(j==r-1)
			printf("\n\n");
		}
	}
}

