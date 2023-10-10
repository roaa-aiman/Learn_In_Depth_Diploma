/*
 * EX1_C_Program_To_Find_Sum_Of_Two_Matrix_Of_Order_2x2.c
 *
 *  Created on: Oct 9, 2023
 *      Author: Roaa aiman
 *
 */

#include<stdio.h>

void main()
{
	float arr1[2][2], arr2[2][2] , arr3[2][2];
	int i ,j ;

	printf("Enter the matrix of the first  matrix:\n");
	for (i=0 ; i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d:",i+1,j+1);
			fflush(stdout);
			scanf("%f",&arr1[i][j]);
		}
	}

	printf("\nEnter the matrix of the second  matrix:\n");
		for (i=0 ; i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("Enter a%d%d:",i+1,j+1);
				fflush(stdout);
				scanf("%f",&arr2[i][j]);
			}
		}

		for (i=0 ; i<2;i++)
				{
					for(j=0;j<2;j++)
					{
						arr3[i][j]=  arr1[i][j]+arr2[i][j] ;
					}
				}

		printf("\nthe sum of two matrices:\n");
				for (i=0 ; i<2;i++)
				{
					for(j=0;j<2;j++)
					{
						printf("%f    ",arr3[i][j]);
						if(i==0 && j==1)
						printf("\n");
					}
				}
}


