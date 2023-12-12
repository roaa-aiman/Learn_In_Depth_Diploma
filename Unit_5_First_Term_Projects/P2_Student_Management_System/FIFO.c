/*
 * FIFO.c
 *
 *  Created on: Nov 3, 2023
 *      Author: Roaa Aiman
 */
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "conio.h"
#include "string.h"
#include "FIFO.h"
#include "Platform_Types.h"

#define DPRINTF(...) 		{fflush(stdout);fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);fflush(stdin);}

FIFO_Status_t FIFO_init (FIFO_info_t* Fifo_buf , student_info_t* buf,uint32_t length)
{
	if (buf == NULL)
	{
		DPRINTF("[ERROR] LIFO initialization failed: NULL pointer \n");
		return FIFO_Null ;
	}
	Fifo_buf->length = length ;
	Fifo_buf->count = 0 ;
	Fifo_buf-> base = buf ;
	Fifo_buf-> head = buf;
	Fifo_buf-> tail = buf;
	return FIFO_no_error;
}
FIFO_Status_t FIFO_Add_Student_From_File (FIFO_info_t* Fifo_buf)
{
	student_info_t NewStudent ;
	FILE *file = fopen("Student_info.txt", "r");
	if (file == NULL)
	{
		printf("[ERROR] Error opening the file.\n");
		return FIFO_error;
	}
	while(!feof(file))
	{
		// Reading roll number of the student
		fscanf(file, "%d", &NewStudent.roll_number);

		// Check if the roll number is exists
		if(Search_For_Roll_Number(Fifo_buf, NewStudent.roll_number)==FIFO_error)
		{
			// Printing that we find a number with other student
			printf("\n[ERROR] Roll number %d is already taken\n", NewStudent.roll_number);

			// Ignore the rest of the line
			fscanf(file, "%*[^\n]");

			// Start over form next line in text file
			continue;
		}

		// Reading data first name, last name and GPA sequential
		fscanf(file, "%s", NewStudent.first_name);
		fscanf(file, "%s", NewStudent.last_name);
		fscanf(file, "%f", &NewStudent.GPA);

		// Reading course IDs
		for (int i = 0; i < COURSES_NUMBER; ++i)
		{
			fscanf(file, "%d", &NewStudent.course_id[i]);
		}

		// Enqueue new student
		if((FIFO_enqueue(Fifo_buf, NewStudent))== FIFO_no_error)
		{
			printf("\n[INFO] Roll number %d is saved successfully\n", NewStudent.roll_number);
		}
		else
		{
			printf("\n[ERROR] Adding students by file failed\n");
			return FIFO_error;
		}
	}

	printf("\n[INFO] Students details are saved successfully\n");

	// Closing the file
	fclose(file);

	return FIFO_no_error;
}
FIFO_Status_t FIFO_Add_Student_manually (FIFO_info_t* Fifo_buf,student_info_t NewStudent)
{
	char temp_text[NAME_LENGTH];

	if (!Fifo_buf-> base||!Fifo_buf->head ||!Fifo_buf->tail)
	{
		DPRINTF("\n[ERROR] Adding students manually failed\n");
		return FIFO_Null;
	}
	//Check Overflow
	if(FIFO_IS_FULL(Fifo_buf) == FIFO_full)
	{
		DPRINTF("\n[ERROR] Adding students manually failed\nFIFO is full\n");
		return FIFO_full;
	}
	do
	{
		DPRINTF("Enter the Roll number: ");
		gets(temp_text);
		NewStudent.roll_number = atoi(temp_text);
	} while (Search_For_Roll_Number(Fifo_buf, NewStudent.roll_number)==FIFO_error);

	DPRINTF("Enter Student first Name: ");
	gets(NewStudent.first_name);

	DPRINTF("Enter Student Second Name: ");
	gets(NewStudent.last_name);

	DPRINTF("Enter the GPA: ");
	gets(temp_text);
	NewStudent.GPA = atof(temp_text);

	DPRINTF("Enter the ID of each course :\n ");
	for (int i= 0 ;i<COURSES_NUMBER;i++)
	{
		DPRINTF("course %d ID:",i+1);
		gets(temp_text);
		NewStudent.course_id[i]=atoi(temp_text);
	}

	// Enqueue new item
	*(Fifo_buf->head) = NewStudent;
	if (Fifo_buf->head == (Fifo_buf->base +( Fifo_buf->length*sizeof(student_info_t))))// Check if the head in the end of fifo to start from base agian
	{
		Fifo_buf->head = Fifo_buf->base;
	}
	else
	{
		Fifo_buf->head++;
	}
	Fifo_buf->count ++  ;
	DPRINTF("\n[INFO] Student details added successfully\n");
	Count_Student(Fifo_buf);
	return FIFO_no_error;
}

void Count_Student(FIFO_info_t* Fifo_buf)
{

	DPRINTF("\n[INFO] The total number of student is %d\n ",Fifo_buf->count);
	DPRINTF("\n[INFO] you can add up to %d students\n",STUDENTS_NUMBER);
	DPRINTF("\n[INFO] you can add  %d more students\n",(STUDENTS_NUMBER - Fifo_buf->count));
}
FIFO_Status_t Search_For_Roll_Number(FIFO_info_t* Fifo_buf , uint32_t roll_number )
{
	student_info_t *Ptemp = Fifo_buf->tail;
	for (int i = 0; i < Fifo_buf->count; i++)
	{
		if (Ptemp->roll_number == roll_number)
		{
			DPRINTF("[ERROR] roll number is unique for each student, please enter another one\n");
			return FIFO_error;
		}
		Ptemp++;
	}
	return FIFO_no_error;
}

FIFO_Status_t Find_student_by_roll_number (FIFO_info_t* Fifo_buf)
{
	char temp_text[NAME_LENGTH];
	int roll_number ;
	student_info_t *Ptemp = Fifo_buf->tail;

	if (!Fifo_buf-> base||!Fifo_buf-> head)
	{
		DPRINTF("\n[ERROR]FIFO Dequeue failed: NULL is passed\n");
		return FIFO_Null;
	}

	if(FIFO_is_empty(Fifo_buf) == FIFO_empty)
	{
		DPRINTF("\n[ERROR] FIFO Dequeue failed: FIFO is empty\n");
		return FIFO_empty;
	}

	DPRINTF("Enter the Roll number of the student: ");
	gets(temp_text);
	roll_number = atoi(temp_text);
	DPRINTF("The Student Details Are:\n ");
	for (int i = 0; i < Fifo_buf->count; i++)
	{
		if (Ptemp->roll_number == roll_number)
		{
			DPRINTF("Student First Name : %s\n",Ptemp->first_name);
			DPRINTF("Student Last Name : %s\n",Ptemp->last_name);
			DPRINTF("Student GPA number: %f\n",Ptemp->GPA);
			for (int i= 0 ;i<COURSES_NUMBER;i++)
			{
				DPRINTF("The Course ID are :%d \n",Ptemp->course_id[i]);

			}

			DPRINTF("------------------------------------------------");
			return FIFO_no_error;
		}
		Ptemp++;
	}
	DPRINTF("\n[ERROR] Roll Number %d not founded\n",roll_number);
	return FIFO_error;

}
FIFO_Status_t Find_student_by_First_Number (FIFO_info_t* Fifo_buf)
{
	char First_Name[NAME_LENGTH] ;
	student_info_t *Ptemp = Fifo_buf->tail;

	if (!Fifo_buf-> base||!Fifo_buf-> head)
	{
		DPRINTF("\n[ERROR]FIFO Dequeue failed: NULL is passed\n");
		return FIFO_Null;
	}

	if(FIFO_is_empty(Fifo_buf) == FIFO_empty)
	{
		DPRINTF("\n[ERROR] FIFO Dequeue failed: FIFO is empty\n");
		return FIFO_empty;
	}

	DPRINTF("Enter the First Name of the student: ");
	gets(First_Name);
	for (int i = 0; i < Fifo_buf->count; i++)
	{
		if (strcmp(Ptemp->first_name, First_Name) == 0)
		{
			DPRINTF("The Student Details Are:\n ");
			DPRINTF("Student Last Name : %s\n",Ptemp->last_name);
			DPRINTF("Student roll number : %d\n",Ptemp->roll_number);
			DPRINTF("Student GPA number: %f\n",Ptemp->GPA);
			for (int i= 0 ;i<COURSES_NUMBER;i++)
			{
				DPRINTF("The Course ID are :%d \n",Ptemp->course_id[i]);

			}
			DPRINTF("------------------------------------------------");
			return FIFO_no_error;
		}
		Ptemp++;
	}
	DPRINTF("\n[ERROR] The First Name of the student %s not founded\n",First_Name);
	return FIFO_error;
}
FIFO_Status_t Print_Students (FIFO_info_t* Fifo_buf)
{
	if (!Fifo_buf-> base||!Fifo_buf-> head)
	{
		DPRINTF("\n[ERROR]FIFO Dequeue failed: NULL is passed\n");
		return FIFO_Null;
	}

	if(FIFO_is_empty(Fifo_buf) == FIFO_empty)
	{
		DPRINTF("\n[ERROR] FIFO Dequeue failed: FIFO is empty\n");
		return FIFO_empty;
	}
	student_info_t *Ptemp = Fifo_buf->tail;
	for (int i = 0; i < Fifo_buf->count; i++)
	{

		DPRINTF("Student First Name : %s\n",Ptemp->first_name);
		DPRINTF("Student Last Name : %s\n",Ptemp->last_name);
		DPRINTF("Student roll number : %d\n",Ptemp->roll_number);
		DPRINTF("Student GPA number: %f\n",Ptemp->GPA);
		for (int i= 0 ;i<COURSES_NUMBER;i++)
		{
			DPRINTF("The Course ID are :%d \n",Ptemp->course_id[i]);

		}
		DPRINTF("------------------------------------------------\n");
		Ptemp++;
	}
	return FIFO_no_error;

}

FIFO_Status_t Find_student_by_course_ID (FIFO_info_t* Fifo_buf)
{
	char temp_text[NAME_LENGTH];
	int Course_ID ;
	student_info_t *Ptemp = Fifo_buf->tail;

	if (!Fifo_buf-> base||!Fifo_buf-> head)
	{
		DPRINTF("\n[ERROR]FIFO Dequeue failed: NULL is passed\n");
		return FIFO_Null;
	}

	if(FIFO_is_empty(Fifo_buf) == FIFO_empty)
	{
		DPRINTF("\n[ERROR] FIFO Dequeue failed: FIFO is empty\n");
		return FIFO_empty;
	}

	DPRINTF("Enter the Course ID of the student: ");
	gets(temp_text);
	Course_ID = atoi(temp_text);
	for (int i = 0; i < Fifo_buf->count; i++)
	{
		for (int i= 0 ;i<COURSES_NUMBER;i++)
		{
			if (Ptemp->course_id[i] == Course_ID)
			{
				DPRINTF("The Student Details Are:\n ");
				DPRINTF("Student First Name : %s\n",Ptemp->first_name);
				DPRINTF("Student Last Name : %s\n",Ptemp->last_name);
				DPRINTF("Student GPA number: %f\n",Ptemp->GPA);

				DPRINTF("------------------------------------------------");
				return FIFO_no_error;
			}

		}

		Ptemp++;
	}
	DPRINTF("\n[ERROR] Course ID %d not founded\n",Course_ID);
	return FIFO_error;

}

FIFO_Status_t Delete_Student (FIFO_info_t* Fifo_buf)
{
	char temp_text[NAME_LENGTH];
	int roll_number;

	if (!Fifo_buf-> base||!Fifo_buf-> head)
	{
		printf("FIFO Dequeue failed: NULL is passed\n");
		return FIFO_Null;
	}

	if(FIFO_is_empty(Fifo_buf) == FIFO_empty)
	{
		printf("FIFO Dequeue failed: FIFO is empty\n");
		return FIFO_empty;
	}

	DPRINTF("Enter the Roll number of the student: ");
	gets(temp_text);
	roll_number = atoi(temp_text);
	if (Fifo_buf->tail->roll_number == roll_number)
	{
		//student_info_t *Ptemp = Fifo_buf->tail;

		if(Fifo_buf->tail == (Fifo_buf->base + ( Fifo_buf->length*sizeof(student_info_t))))
		{
			Fifo_buf->tail = Fifo_buf->base;
		}
		else
		{
			Fifo_buf->tail++;
		}

	}
	Fifo_buf->count--;
	return FIFO_no_error;
}

FIFO_Status_t Update_student (FIFO_info_t* Fifo_buf)
{
	char temp_text[NAME_LENGTH];
	int roll_number ;
	student_info_t *Ptemp = Fifo_buf->tail;

	if (!Fifo_buf-> base||!Fifo_buf-> head)
	{
		DPRINTF("\n[ERROR]FIFO Dequeue failed: NULL is passed\n");
		return FIFO_Null;
	}

	if(FIFO_is_empty(Fifo_buf) == FIFO_empty)
	{
		DPRINTF("\n[ERROR] FIFO Dequeue failed: FIFO is empty\n");
		return FIFO_empty;
	}

	DPRINTF("Enter the Roll number to update the entry: ");
	gets(temp_text);
	roll_number = atoi(temp_text);
	for (int i = 0; i < Fifo_buf->count; i++)
	{
		if (Ptemp->roll_number == roll_number)
		{
			break;
		}
		Ptemp++;
	}
	DPRINTF("Choose what need to update:\n ");
	DPRINTF(" ============================= ");
	DPRINTF("\n\t 1: First Name");
	DPRINTF("\n\t 2: Last Name");
	DPRINTF("\n\t 3: roll no");
	DPRINTF("\n\t 4: GPA");
	DPRINTF("\n\t 5: Courses");
	DPRINTF("\n\n Enter option number: ");
	gets(temp_text);
	DPRINTF("\n ============================= \n");
	switch(atoi(temp_text))
	{
	case 1:
		DPRINTF("\n Enter The New First Name: ");
		gets(temp_text);
		strcpy(Ptemp->first_name,temp_text);
		break;
	case 2:
		DPRINTF("\n Enter The New Last Name: ");
		gets(temp_text);
		strcpy(Ptemp->last_name,temp_text);
		break;
	case 3:
		DPRINTF("\n Enter The New roll no: ");
		gets(temp_text);
		Ptemp->roll_number=atoi(temp_text);
		break;
	case 4:
		DPRINTF("\n Enter The New GPA: ");
		gets(temp_text);
		Ptemp->GPA=atof(temp_text);
		break;
	case 5:
		Update_courses(Ptemp);
		break;
	default:
		DPRINTF("\n Wrong Option: Try Again \n\n");
		break;
	}
	for (int i = 0; i < Fifo_buf->count; i++)
	{
		if (Ptemp->roll_number == roll_number)
		{
			DPRINTF("Student First Name : %s\n",Ptemp->first_name);
			DPRINTF("Student Last Name : %s\n",Ptemp->last_name);
			DPRINTF("Student GPA number: %f\n",Ptemp->GPA);
			for (int i= 0 ;i<COURSES_NUMBER;i++)
			{
				DPRINTF("The Course ID are :%d \n",Ptemp->course_id[i]);

			}
			DPRINTF("------------------------------------------------");
			return FIFO_no_error;
		}
		Ptemp++;
	}
	DPRINTF("\n[ERROR] Roll Number %d not founded\n",roll_number);
	return FIFO_error;

}

void Update_courses (student_info_t *Ptemp)
{
	char temp_text[NAME_LENGTH];
	DPRINTF("\n Enter The New Course_ID: ");
	for (int i= 0 ;i<COURSES_NUMBER;i++)
	{
		DPRINTF("course %d ID:",i+1);
		gets(temp_text);
		Ptemp->course_id[i]=atoi(temp_text);
	}

}

FIFO_Status_t FIFO_enqueue (FIFO_info_t* Fifo_buf , student_info_t NewStudent)
{
	if (!Fifo_buf-> base||!Fifo_buf->head ||!Fifo_buf->tail)
	{
		printf("FIFO enqueue failed: NULL pointer is passed\n");
		return FIFO_Null;
	}
	//Check Overflow
	if(FIFO_IS_FULL(Fifo_buf) == FIFO_full)
	{
		printf("FIFO is full\n");
		return FIFO_full;
	}

	*(Fifo_buf-> head)= NewStudent ;
	if (Fifo_buf->head == (Fifo_buf->base +( Fifo_buf->length*sizeof(student_info_t))))// Check if the head in the end of fifo to start from base agian
	{
		Fifo_buf->head = Fifo_buf->base;
	}
	else
	{
		Fifo_buf->head++;
	}
	Fifo_buf->count ++  ;
	return FIFO_no_error;
}

FIFO_Status_t FIFO_IS_FULL (FIFO_info_t* Fifo_buf)
{
	if (!Fifo_buf-> base||!Fifo_buf->head ||!Fifo_buf->tail)
	{
		DPRINTF("[ERROR] FIFO is full failed: NULL is passed\n");
		return FIFO_Null;
	}
	if(Fifo_buf->count == Fifo_buf->length )
		return FIFO_full;

	return FIFO_no_error;

}

FIFO_Status_t FIFO_is_empty(FIFO_info_t *Fifo_buf)
{
	// Check parameters validity
	if( Fifo_buf->base == NULL || Fifo_buf->head == NULL)
	{
		DPRINTF("[ERROR] FIFO is empty failed: NULL is passed\n");
		return FIFO_Null;
	}

	// Check if the number of items is zero
	if(Fifo_buf->count == 0)
	{
		return FIFO_empty;
	}

	return FIFO_no_error;
}


