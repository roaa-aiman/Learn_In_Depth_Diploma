/*
 ============================================================================
 Name        : C_Program_to_Store_Information_of_a_Student_Using_Structure.c
 Author      : roaa aiman 
 Description : C Program to Store Information of a Student Using Structure
 ============================================================================
 */

#include <stdio.h>

struct Sstudent
{
	char Name[100];
	int roll_number ;
	float marks;
};
int main()
{
	struct Sstudent s ;
	printf("Enter information of students:\n");
	printf("Enter name:");
	fflush (stdin); fflush(stdout);
	gets(s.Name);
	printf("Enter roll number:");
	fflush (stdin); fflush(stdout);
	scanf("%d",&s.roll_number);
	printf("Enter marks:");
	fflush (stdin); fflush(stdout);
	scanf("%f",&s.marks);

	printf("Displaying Information:\n");
	printf("name:%s\n",s.Name);
	printf("roll number:%d\n",s.roll_number);
	printf("marks:%f\n",s.marks);




	return 0;
}

