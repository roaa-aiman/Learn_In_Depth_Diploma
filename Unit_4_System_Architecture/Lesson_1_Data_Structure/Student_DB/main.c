/*
 * main.c
 *
 *  Created on: Oct 28, 2023
 *      Author: SMART
 */
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "conio.h"

#include "linked_list.h"

#define DPRINTF(...) 		{fflush(stdout);fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);fflush(stdin);}


int main(void)
{
	char temp_text[NAME_LENGTH];
	struct SStudentNode *gpStudent = NULL ;

	while(1)
	{
		DPRINTF(" ============================= ");
		DPRINTF("\n Choose on of the following options \n");
		DPRINTF("\n\t 1: Add Student");
		DPRINTF("\n\t 2: Delete Student");
		DPRINTF("\n\t 3: View Students");
		DPRINTF("\n\t 4: Delete All");
		DPRINTF("\n\t 5: Get Node");
		DPRINTF("\n\t 6: Get Students counter by Iteration");
		DPRINTF("\n\t 7: Get Students counter by Recursion");
		DPRINTF("\n\t 8: Get Node from the end");
		DPRINTF("\n\t 9: Get Middle student");
		DPRINTF("\n\t 10: Reverse student");
		DPRINTF("\n\t 11: Exit");
		DPRINTF("\n\n Enter option number: ");

		gets(temp_text);
		DPRINTF("\n ============================= \n");
		switch(atoi(temp_text))
		{
		case 1:
			Add_Student();
			break;

		case 2:
			Delete_Student();
			break;

		case 3:
			Print_All_Students();
			break;

		case 4:
			Delete_All_Students();
			break;

		case 5:
			Get_node();
			break;

		case 6:
			DPRINTF("Student Numbers : %d\n", Students_Length_iterative());
			break;

		case 7:
			DPRINTF("Student Numbers : %d\n", Students_Length_recursive(gpStudent));
			break;
		case 8:
			Get_node_from_end();
			break;

		case 9:
			Get_middle_student();
			break;

		case 10:
			Reverse_students();
			break;
		case 11:
			return 0;

		default:
			DPRINTF("\n Wrong Option: Try Again \n\n");
			break;
		}
	}
	return 0;
}

