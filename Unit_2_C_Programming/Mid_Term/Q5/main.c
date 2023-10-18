/*
 * main.c
 *
 *  Created on: Oct 14, 2023
 *      Author: roaa aiman
 */
#include <stdio.h>
int noOfOnes(int num);
int main()
{
	int Number ;

	for(int i =0 ; i<2;i++)
	{
		printf("\n test case %d:",i+1);
		printf("input:");
		fflush(stdout);
		scanf("%d",&Number);

		printf("output:%d",noOfOnes(Number));
	}

	return 0 ;
}
int noOfOnes(int num)
{
        int count = 0;
        while(num)
        {
	    count += num & 1;
	    num >>=1;
        }
    return count ;
}
