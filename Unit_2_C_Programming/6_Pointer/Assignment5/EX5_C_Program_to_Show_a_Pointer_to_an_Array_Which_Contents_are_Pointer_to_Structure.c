/*
 * EX5_C_Program_to_Show_a_Pointer_to_an_Array_Which_Contents_are_Pointer_to_Structure.c
 *
 *  Created on: Oct 21, 2023
 *      Author: roaa aiman
 */
#include <stdio.h>

struct SEmployee
{
	char Exmployee_Name[100];
	int Exmployee_ID ;
};
int main()
{

	struct SEmployee emp1 = {"roaa",15}, emp2 = {"Alex",1002}, emp3 = {"Fahmy",49};

	struct SEmployee *arr[]={&emp1,&emp2,&emp3};

	struct SEmployee*(*P_arr_emp)[3]= &arr;

	printf(" Employee Name : %s \n",(*(*P_arr_emp+1))->Exmployee_Name);
	printf(" Employee ID :  %d \n",(*(*P_arr_emp+1))->Exmployee_ID);

	return 0;
}
