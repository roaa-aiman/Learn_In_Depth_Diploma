/*
 * EX3_C_Program_to_Reverse_String_Without_Using_Library_Function.c
 *
 *  Created on: Oct 10, 2023
 *      Author: roaa aiman
 */
#include<stdio.h>
#include<string.h>

int main()
{
	char str[30],revese_text[30] ;
	int i,j=0 , len = 0;
	printf("Enter a string :");
	fflush(stdin); fflush(stdout);
	gets(str);
    len = strlen(str);
	for (i=len ;i>0;i--)
	{
		revese_text[j] = str[i-1];
		j++ ;

	}
	printf("Reverse string is : %s", revese_text);

	return 0 ;
}

