/*
 * EX2_C_Program_To_Find_The_Length_of_a_String.c
 *
 *  Created on: Oct 10, 2023
 *      Author: roaa aiman
 */
#include<stdio.h>


int main()
{
	char str[30];
	int i , len = 0;
	printf("Enter a string :");
	fflush(stdin); fflush(stdout);
	gets(str);

	for (i=0 ; str[i]!='\0';++i)
	{
		len++;
	}
	printf("the length of string : %d",len);


	return 0 ;
}



