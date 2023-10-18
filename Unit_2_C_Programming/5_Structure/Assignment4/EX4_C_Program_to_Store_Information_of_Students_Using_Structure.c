/*
 * EX4_C_Program_to_Store_Information_of_Students_Using_Structure.c
 *
 *  Created on: Oct 18, 2023
 *      Author: Roaa aiman
 */
#include <stdio.h>

struct Sstudent
{
	char Name[100];
	int roll_number ;
	float marks;
};

void ReadStudentInformation ( struct Sstudent students[]);
void DisblayStudentInformation ( struct Sstudent students[]);
int main()
{
	struct Sstudent students[10]  ;
	printf("Enter information of student:\n");
	ReadStudentInformation (students);
	printf("Displaying Information:\n");
	DisblayStudentInformation (students);

	return 0;
}
void ReadStudentInformation ( struct Sstudent students[])
{
	for (int i=0 ; i<10 ; i++)
	{
		students[i].roll_number=i+1;
		printf("for roll number %d:\n",students[i].roll_number);
		printf("Enter name:");
		fflush (stdin); fflush(stdout);
		gets(students[i].Name);
		printf("Enter marks:");
		fflush (stdin); fflush(stdout);
		scanf("%f",&students[i].marks);
	}

}

void DisblayStudentInformation ( struct Sstudent students[])
{
	for (int i=0 ; i<10 ; i++)
	{
		students[i].roll_number=i+1;
		printf("information for roll number %d :\n",students[i].roll_number);
		printf("name:%s\n",students[i].Name);
		printf("Enter marks:%0.1f",students[i].marks);

	}

}


