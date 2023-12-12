/*
 * FIFO.h
 *
 *  Created on: Nov 3, 2023
 *      Author: Roaa aiman
 */

#ifndef FIFO_H_
#define FIFO_H_
#include "Platform_Types.h"

// USER CONFIGRATION
#define NAME_LENGTH 50
#define COURSES_NUMBER 5
#define STUDENTS_NUMBER 50
#define DPRINTF(...) 		{fflush(stdout);fflush(stdin);\
							printf(__VA_ARGS__);\
							fflush(stdout);fflush(stdin);}


// Student Structures
typedef struct {
	char first_name[NAME_LENGTH];
	char last_name[NAME_LENGTH];
	uint32_t roll_number;
	float GPA;
	uint32_t course_id[COURSES_NUMBER];
}student_info_t;

student_info_t buf[STUDENTS_NUMBER];

// structure  declaration
typedef struct{
	uint32_t count ;
	uint32_t length ;
	student_info_t* base ;
	student_info_t* head ;
	student_info_t* tail ;

}FIFO_info_t ;

// enumeration decleration
typedef enum
{
	FIFO_no_error,
	FIFO_error,
	FIFO_full,
	FIFO_empty,
	FIFO_Null
}FIFO_Status_t;

// function declaration
FIFO_Status_t FIFO_init (FIFO_info_t* Fifo_buf , student_info_t* buf,uint32_t length);
FIFO_Status_t FIFO_Add_Student_From_File (FIFO_info_t* Fifo_buf);
FIFO_Status_t FIFO_Add_Student_manually (FIFO_info_t* Fifo_buf,student_info_t NewStudent );
FIFO_Status_t Search_For_Roll_Number(FIFO_info_t* Fifo_buf , uint32_t roll_number );
void Count_Student(FIFO_info_t* Fifo_buf);
FIFO_Status_t Find_student_by_roll_number (FIFO_info_t* Fifo_buf  );
FIFO_Status_t Find_student_by_First_Number (FIFO_info_t* Fifo_buf);
FIFO_Status_t Find_student_by_course_ID (FIFO_info_t* Fifo_buf);
FIFO_Status_t Delete_Student (FIFO_info_t* Fifo_buf);
FIFO_Status_t Update_student (FIFO_info_t* Fifo_buf);
void Update_courses (student_info_t *Ptemp);
FIFO_Status_t Print_Students (FIFO_info_t* Fifo_buf);
FIFO_Status_t FIFO_enqueue (FIFO_info_t* Fifo_buf , student_info_t NewStudent);
FIFO_Status_t FIFO_IS_FULL (FIFO_info_t* Fifo_buf);
FIFO_Status_t FIFO_is_empty(FIFO_info_t* Fifo_buf);




#endif /* FIFO_H_ */
