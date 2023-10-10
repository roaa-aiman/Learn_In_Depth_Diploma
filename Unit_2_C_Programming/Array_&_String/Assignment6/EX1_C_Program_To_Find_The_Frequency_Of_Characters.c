/*
 * EX1_C_Program_To_Find_The_Frequency_Of_Characters.c
 *
 *  Created on: Oct 9, 2023
 *      Author: roaa aiman
 */
#include<stdio.h>
#include<string.h>

int main()
{
	char str[30] , c ;
	int i ,n=0;
	printf("Enter a string :");
	fflush(stdin); fflush(stdout);
	gets(str);

	printf("Enter a character to find the frequency:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	int len = strlen(str);
	for (i=0 ; i<len ;i++)
	{
		if(str[i]==c)
			n++;
	}

	printf(" frequency of %c = %d",c,n);


	return 0 ;
}

