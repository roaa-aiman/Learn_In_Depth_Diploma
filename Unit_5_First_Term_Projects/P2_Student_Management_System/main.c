/*
2 * main.c
 *
 *  Created on: Nov 3, 2023
 *      Author: Roaa Aiman
 */
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "conio.h"
#include "FIFO.h"
#include "Platform_Types.h"

#define DPRINTF(...) 		{fflush(stdout);fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);fflush(stdin);}

int main(void)
{
	char temp_text[NAME_LENGTH];
	FIFO_info_t Fifo_Student;
	student_info_t NewStudent;
	FIFO_init (&Fifo_Student ,buf,STUDENTS_NUMBER);
	DPRINTF(" ============================= ");
	DPRINTF("\n Welcome to the student management \n");
	while(1)
	{
		DPRINTF(" ============================= ");
		DPRINTF("\n Choose the task that you want to perform \n");
		DPRINTF("\n\t 1: Add the student Details Manually");
		DPRINTF("\n\t 2: Add the Student Detail From Text");
		DPRINTF("\n\t 3: Find Student by Roll Number");
		DPRINTF("\n\t 4: Find Student by First Name");
		DPRINTF("\n\t 5: Find Student by Course ID");
		DPRINTF("\n\t 6: Print Students Number");
		DPRINTF("\n\t 7: Delete Student by Roll Number");
		DPRINTF("\n\t 8: Update Student by Roll Number");
		DPRINTF("\n\t 9: View Students");
		DPRINTF("\n\t 10: Exit");
		DPRINTF("\n\n Enter option number: ");

		gets(temp_text);
		DPRINTF("\n ============================= \n");
		switch(atoi(temp_text))
		{
		case 1:
			FIFO_Add_Student_From_File (&Fifo_Student);
			break;
		case 2:
			FIFO_Add_Student_manually (&Fifo_Student,NewStudent);
			break;
		case 3:
			Find_student_by_roll_number (&Fifo_Student);
			break;
		case 4:
			Find_student_by_First_Number (&Fifo_Student);
			break;
		case 5:
			Find_student_by_course_ID (&Fifo_Student);
			break;
		case 6:
			Count_Student (&Fifo_Student);
			break;
		case 7:
			 Delete_Student(&Fifo_Student);
			break;
		case 8:
			Update_student (&Fifo_Student);
			break;
		case 9:
			Print_Students (&Fifo_Student);
			break;
		case 10:
			return 0;

		default:
			DPRINTF("\n Wrong Option: Try Again \n\n");
			break;
		}
	}
	return 0;
}

