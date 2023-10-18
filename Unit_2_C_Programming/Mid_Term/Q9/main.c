/*
 * main.c
 *
 *  Created on: Oct 16, 2023
 *      Author: SMART
 */

#include <stdio.h>
#include <string.h>
void Reverse_words(char sentence[]);
int main(void)
{
	char sentence[100];
	printf("Enter the string:");
	gets(sentence);
	printf("The reversed string is:");
	Reverse_words(sentence);
	return 0 ;
}
void Reverse_words(char sentence[])
{
	int start;
	for(int i=0; i<strlen(sentence); i++)
	{
		if(sentence[i]==' ')
		{
			start=i;
			break;
		}
	}
	printf("%s ",&sentence[start+1]);
	for(int i=0; i<start; i++)
	{
		printf("%c",sentence[i]);
	}
}
