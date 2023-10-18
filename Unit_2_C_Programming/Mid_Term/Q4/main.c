/*
 * main.c
 *
 *  Created on: Oct 14, 2023
 *      Author: roaa aiman
 */
#include <stdio.h>
#include<string.h>
void reverseNumber(char num[],int len);
int main()
{
	char Number [100] ;

	for(int i =0 ; i<2;i++)
	{
		printf("\n test case %d:",i+1);
		printf("input:");
		fflush(stdout);
		scanf("%s",Number);
		int len = strlen(Number);
		printf("output:");
		reverseNumber(Number, len);
		printf("\n");
	}

	return 0 ;
}
void reverseNumber(char num[],int len)
{

	    for (int i = len - 1; i >= 0; i--)
	    {
	        num[i] = num[i] - '0'; // Convert character to integer
	        printf("%d", num[i]);
	    }


}
