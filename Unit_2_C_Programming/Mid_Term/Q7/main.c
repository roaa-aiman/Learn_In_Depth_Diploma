/*
 * main.c
 *
 *  Created on: Oct 12, 2023
 *      Author: SMART
 */
#include <stdio.h>
int calc_sum(unsigned int num);
int main()
{
	int result = calc_sum(100);
	printf("sum of numbers from 1 to 100 is:%d",result);

	return 0;
}

int calc_sum(unsigned int num)
{
	static int sum =0;
	if(num>0)
	{
		calc_sum(num-1);
		sum+=num;
	}
	return sum ;
}





























