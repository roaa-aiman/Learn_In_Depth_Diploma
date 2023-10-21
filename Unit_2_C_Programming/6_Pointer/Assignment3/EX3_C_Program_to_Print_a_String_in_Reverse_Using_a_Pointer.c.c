/*
 * EX3_C_Program_to_Print_a_String_in_Reverse_Using_a_Pointer.c
 *
 *  Created on: Oct 21, 2023
 *      Author: roaa aiman
 */

#include <stdio.h>
#include <string.h>
int main()
{
	char inputString[100];
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	scanf("%s",inputString);

	int length = strlen(inputString);
	char *endPtr = inputString + length - 1;

	printf("String in reverse: ");
	while (endPtr>=inputString )
	{
		printf("%c", *endPtr);
		endPtr--;
	}
	printf("\n");
	return 0;
}
