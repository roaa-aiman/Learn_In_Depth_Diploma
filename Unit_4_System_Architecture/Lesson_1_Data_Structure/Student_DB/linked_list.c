/*
 * linked_list.c
 *
 *  Created on: Oct 28, 2023
 *      Author: roaa aiman
 */
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "conio.h"

#include "linked_list.h"

struct SStudentNode *gpFirstStudent = NULL;


void Add_Student(void)
{
	struct SStudentNode *pNewStudent ;
	struct SStudentNode *pLastStudent ;

	if (gpFirstStudent == NULL)// If the list is empty
	{
		// Create the first record
		pNewStudent = (struct SStudentNode*) malloc(sizeof(struct SStudentNode));

		// Check for invalid allocation
		if(pNewStudent == NULL)
		{
			printf("Error: Can't create new student\n");
			return;
		}

		// Assign the gpFirstStudent to it
		gpFirstStudent = pNewStudent;
	}
	else // If the list contain records
	{
		// Navigate until reach to the last record
		pLastStudent = gpFirstStudent;
		while(pLastStudent->pNextStudent)
		{
			pLastStudent = pLastStudent->pNextStudent;
		}

		// Create new record
		pNewStudent = (struct SStudentNode*) malloc(sizeof(struct SStudentNode));
		// Check for invalid allocation
		if(pNewStudent == NULL)
		{
			printf("Error: Can't create new student\n");
			return;
		}
		// Assign its next to it
		pLastStudent->pNextStudent = pNewStudent;

	}
	//enter the data of student
	Enter_Data(pNewStudent);
	//set the next pointer to null
	// Assign its next to it
	pNewStudent->pNextStudent = NULL;
}

// enter the student data
void Enter_Data(struct SStudentNode *NewStudent)
{
	char temp_text[NAME_LENGTH];

	DPRINTF("Enter Student ID: ");
	gets(temp_text);
	NewStudent->Student.ID = atoi(temp_text);

	DPRINTF("Enter Student Name: ");
	gets(NewStudent->Student.Name);

	DPRINTF("Enter Student Height: ");
	gets(temp_text);
	NewStudent->Student.height = atof(temp_text);
}

// Delete a student from the list
int Delete_Student(void)
{
	char temp_text[NAME_LENGTH];
	unsigned int selected_id;

	// Get the selected ID from the user
	DPRINTF("\nEnter Student ID to be deleted: ");
	gets(temp_text);
	selected_id = atoi(temp_text);

	if(gpFirstStudent) // List have records
	{
		struct SStudentNode *pSelectedStudent = gpFirstStudent;
		struct SStudentNode *pPreviousStudent = NULL ;

		// Loop on all records starting from the gpFirstStudent
		while(pSelectedStudent)
		{
			// Compare the recorded ID with the selected ID
			if(pSelectedStudent->Student.ID == selected_id)
			{
				if(pPreviousStudent)
				{
					pPreviousStudent->pNextStudent = pSelectedStudent->pNextStudent;
				}
				else
				{
					gpFirstStudent = pSelectedStudent->pNextStudent;
				}
				free(pSelectedStudent);
				DPRINTF("\nThe ID selected is deleted. \n");
				return 1; // find it
			}
			// Store the previous record pointer
			pPreviousStudent = pSelectedStudent;
			pSelectedStudent = pSelectedStudent->pNextStudent;

		}
	}
	DPRINTF("\n\tThe ID selected not find. \n");
	return 0; // can't Find it
}

// Print all students in the list
void Print_All_Students(void)
{
	struct SStudentNode *pCurrentStudent = gpFirstStudent;
	unsigned int counter = 0;

	if(gpFirstStudent == NULL)
	{
		DPRINTF("\n List is empty. \n");
	}
	else
	{
		while(pCurrentStudent)
		{
			DPRINTF("\n Student Number %d",counter+1);
			DPRINTF("\n\t ID : %d",pCurrentStudent->Student.ID);
			DPRINTF("\n\t Name : %s",pCurrentStudent->Student.Name);
			DPRINTF("\n\t Height : %0.2f\n",pCurrentStudent->Student.height);
			pCurrentStudent = pCurrentStudent->pNextStudent;
			counter++;
		}
	}
}

// Delete all students in the list
void Delete_All_Students(void)
{
	struct SStudentNode *pCurrentStudent = gpFirstStudent;

	if(gpFirstStudent == NULL)
	{
		DPRINTF("\n List is empty");
	}
	else
	{
		while(pCurrentStudent)
		{
			struct SStudentNode *pTempStudent = gpFirstStudent;
			pCurrentStudent = pCurrentStudent->pNextStudent;
			free(pTempStudent);
		}
		gpFirstStudent = NULL;
	}
}

void Get_node(void)
{
	char temp_text[NAME_LENGTH];
	int index = 0;
	DPRINTF("Enter Node Number: ");
	gets(temp_text);
	index = atoi(temp_text);
	unsigned int counter = 0;
	struct SStudentNode *pCurrentStudent = gpFirstStudent;
	if(gpFirstStudent == NULL)
	{
		DPRINTF("\n List is empty. \n");
	}
	else
	{
		while(pCurrentStudent)
		{
			if(counter == index)
			{
				DPRINTF("\n student at Index %d :",index);
				DPRINTF("\n\t ID : %d",pCurrentStudent->Student.ID);
				DPRINTF("\n\t Name : %s",pCurrentStudent->Student.Name);
				DPRINTF("\n\t Height : %0.2f\n",pCurrentStudent->Student.height);
				break;

			}
			if(pCurrentStudent->pNextStudent == NULL)
			{
				DPRINTF("\n this index doesn't exsist \n");
			}
			pCurrentStudent = pCurrentStudent->pNextStudent;
			counter++;
		}
	}
}

// Get the list length using iteration
int Students_Length_iterative(void)
{
	unsigned int counter = 0;
	struct SStudentNode *pCurrentStudent = gpFirstStudent;
	// Check if the list is empty
	if(gpFirstStudent == NULL )
	{
		DPRINTF("\nThe List is Empty.\n");
		return 0;
	}
	else
	{
		// Looping in list
		while(pCurrentStudent)
		{
			if(pCurrentStudent->pNextStudent == NULL)
			{
				break;
			}
			pCurrentStudent = pCurrentStudent->pNextStudent;
			counter++;
		}
		return counter;
	}

}

// Get the list length using recursion
int Students_Length_recursive(struct SStudentNode *list)
{
	// Check if the list is empty
	if(gpFirstStudent == NULL )
	{
		DPRINTF("\nThe List is Empty.\n");
		return 0;
	}
	else
	{
		if(list->pNextStudent == NULL)
		{
			return 0;
		}
		else
		{
			return 1+Students_Length_recursive(list->pNextStudent);
		}
	}


}

void Get_node_from_end(void)
{
	char temp_text[NAME_LENGTH];
	unsigned int index =0 ;
	DPRINTF("Enter Node Number from the end : ");
	gets(temp_text);
	index = atoi(temp_text);
	struct SStudentNode *pMainStudent = gpFirstStudent;// move if N equal Count until ref_ptr reach to Null then it points to the node we need
	struct SStudentNode *prefStudent = gpFirstStudent;// move until reach to the Null
	unsigned int counter= 0;
	// Check if the list is empty
	if(gpFirstStudent == NULL )
	{
		DPRINTF("\nThe List is Empty.\n");
	}

	else
	{
		while(prefStudent->pNextStudent)
		{
			if(index == counter)
			{
				pMainStudent = pMainStudent->pNextStudent;
			}
			counter++;
			prefStudent = prefStudent->pNextStudent;
		}
		DPRINTF("\n index %d from end :",index);
		DPRINTF("\n\t ID : %d",pMainStudent->Student.ID);
		DPRINTF("\n\t Name : %s",pMainStudent->Student.Name);
		DPRINTF("\n\t Height : %0.2f\n",pMainStudent->Student.height);
	}
}

void Get_middle_student(void)
{
	struct SStudentNode *pFastStudent = gpFirstStudent;
	struct SStudentNode *pSlowStudent = gpFirstStudent;
	// Check if the list is empty
	if(gpFirstStudent == NULL )
	{
		DPRINTF("\nThe List is Empty.\n");
	}
	else
	{
		while(pFastStudent)
		{
			pFastStudent =  pFastStudent->pNextStudent->pNextStudent;
			pSlowStudent =  pSlowStudent->pNextStudent;
			if(pFastStudent->pNextStudent==NULL)
			{

				break;
			}


		}

		DPRINTF("\n \t ID : %d",pSlowStudent->Student.ID);
		DPRINTF("\n \t Name  %s",pSlowStudent->Student.Name);
		DPRINTF("\n \t height  %f",pSlowStudent->Student.height);
	}

}
void Reverse_students(void)
{
	// Initialize node for previous, current and next
	struct SStudentNode *pPreviousStudent = NULL;
	struct SStudentNode *pCurrentStudent = gpFirstStudent;
	struct SStudentNode *pNextStudent = NULL;

	// Check if the list is empty
	if(gpFirstStudent == NULL)
	{
		DPRINTF("\nThe List is Empty.\n");
		return;
	}
	else{
		// if pCurrentStudent get the last node in the list
		while(pCurrentStudent != NULL)
		{
			pNextStudent = pCurrentStudent->pNextStudent;
			pCurrentStudent->pNextStudent = pPreviousStudent;
			pPreviousStudent = pCurrentStudent;
			pCurrentStudent = pNextStudent;
		}

		// After reverse all node
		gpFirstStudent = pPreviousStudent;
	}

}

