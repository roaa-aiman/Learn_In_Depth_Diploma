/*
 ======================================================================================================================
 Name        : EX8_C_Program_to_Make_a_Simple_Calculator_Using_Switch_Case.c
 Author      : Roaa aiman
 Created on	 : oct 7, 2023
 Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX8 C Program to make a simple calculator using switch...case
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
  char op;
  float N1 ,N2;
  printf("Enter the operator either + or - or * or / :\n ");
  fflush(stdout);
  scanf("%c", &op);
  printf("Enter the first operands:\n");
  fflush(stdout);
  scanf("%f", &N1);
  printf("Enter the second operands:\n ");
  fflush(stdout);
  scanf("%f", &N2);

  switch (op)
  {
    case '+':
      printf("%.2f + %.2f = %.2f", N1, N2, N1 + N2);
      break;
    case '-':
      printf("%.2f - %.2f = %.2f", N1, N2, N1 - N2);
      break;
    case '*':
      printf("%.2f * %.2f = %.2f", N1, N2, N1 * N2);
      break;
    case '/':
      printf("%.2f / %.2f = %.2f", N1, N2, N1 / N2);
      break;

    default:
      printf("Error! operator is not correct");
      break;
  }
  return 0;
}

