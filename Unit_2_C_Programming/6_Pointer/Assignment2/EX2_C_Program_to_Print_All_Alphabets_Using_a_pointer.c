/*
 * EX2_C_Program_to_Print_All_Alphabets_Using_a_pointer.c
 *
 *  Created on: Oct 19, 2023
 *      Author: roaa aiman
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char alphabets[27];
	int i;
	char *Ptr ;
	printf("\n\n The Alphabets are :\n");

	Ptr = alphabets ;

	for (i = 0; i < 26; ++i)
	{
		*Ptr = i +'A';
		printf(" %c ", *Ptr);
		Ptr++;

	}


	return 0;
}

