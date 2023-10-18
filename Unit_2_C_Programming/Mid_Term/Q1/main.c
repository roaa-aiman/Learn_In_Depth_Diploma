/*
 * main.c
 *
 *  Created on: Oct 12, 2023
 *      Author: roaa aiman 
 */

#include<stdio.h>
#include<string.h>

int main()
{
	char Number [100] ;
	int sum = 0 ;
	printf("input:");
	fflush(stdout);
	scanf("%s",Number);
	int len = strlen(Number);
	for (int i = 0;i<len;i++)
	{

		sum+= Number[i]-'0';
	}

	printf("output:%d",sum);

	return 0 ;
}

