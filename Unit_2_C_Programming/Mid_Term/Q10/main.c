/*
 * main.c
 *
 *  Created on: Oct 16, 2023
 *      Author: SMART
 */

#include <stdio.h>
#include <string.h>
int Max_ones(int num);
int main(void)
{
    int num ;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("The max number of ones is:%d",Max_ones( num));

	return 0 ;
}
int Max_ones(int num)
{
	int count ;
	while(num!=0)
	{
		num = (num&(num<<1));
		count++;
	}
	return count;

}




