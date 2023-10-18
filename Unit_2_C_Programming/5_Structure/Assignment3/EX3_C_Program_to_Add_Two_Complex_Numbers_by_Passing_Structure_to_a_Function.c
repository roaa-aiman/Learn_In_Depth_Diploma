/*
 * EX3_C_Program_to_Add_Two_Complex_Numbers_by_Passing_Structure_to_a_Function.c
 *
 * Created on : oct 16, 2023
 *     Author : roaa aiman
 *
 * Description:
 */


#include <stdio.h>

struct Scomplex
{
	float real;
	float imajinary;
}c1,c2,sum;
struct Scomplex add(struct Scomplex c1,struct Scomplex c2);
int main()
{
	printf("for 1st complex number:\n");
	printf("Enter real and imajinary respectively:");
	fflush (stdin); fflush(stdout);
	scanf("%f",&c1.real);
	scanf("%f",&c1.imajinary);
	printf("\nfor 2st complex number:\n");
	printf("Enter real and imajinary respectively:");
	fflush (stdin); fflush(stdout);
	scanf("%f",&c2.real);
	scanf("%f",&c2.imajinary);
    sum = add(c1,c2);
	printf("Sum:%.1f+%.1fi\n",sum.real,sum.imajinary);

	return 0;
}
struct Scomplex add(struct Scomplex c1,struct Scomplex c2)
{
	struct Scomplex result;
	result.real = c1.real +c2.real ;
	result.imajinary= c1.imajinary+c2.imajinary;

	return result;
}
