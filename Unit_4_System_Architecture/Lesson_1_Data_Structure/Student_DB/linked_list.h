/*
 * linked_list.h
 *
 *  Created on: Oct 28, 2023
 *      Author: roaa aiman
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "conio.h"

#define NAME_LENGTH 30

#define DPRINTF(...) 		{fflush(stdout);fflush(stdin);\
							printf(__VA_ARGS__);\
							fflush(stdout);fflush(stdin);}

/*=========== TypeDefs ============*/
struct SStudentData
{
	int ID;
	char Name[NAME_LENGTH]; // +1
	float height;
};

// linked list node
struct SStudentNode
{
	struct SStudentData Student;
	struct SStudentNode *pNextStudent;
};

/*=========== APIs ============*/

// Add a student to the list
void Add_Student(void);
// enter the student data
void Enter_Data(struct SStudentNode *NewStudent);
// Delete a student from the list
int Delete_Student(void);
// Print all students in the list
void Print_All_Students(void);
// Delete all students in the list
void Delete_All_Students(void);
// Get a Student node form the list using index number
void Get_node(void);
// Get the list length using iteration (looping)
int Students_Length_iterative(void);
// Get the list length using recursion
int Students_Length_recursive(struct SStudentNode *list);
// Get a Student node form the end of list
void Get_node_from_end(void);
// Get the middle student even the number (odd or even)
void Get_middle_student(void);
// Reverse the arrangement of the list
void Reverse_students(void);

#endif /* STUDENT_DB_H_ */
