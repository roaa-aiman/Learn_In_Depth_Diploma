/*
 * main.c
 *
 *  Created on: Oct 14, 2023
 *      Author: roaa aiman
 */
#include <stdio.h>
#include <math.h>

int main()
{
    double  root ;
    int num ;
    // Input a number
    printf("Enter a number: ");
    fflush(stdout);
    scanf("%d", &num);

    // Calculate the square root
    if (num >= 0)
    {
        root = sqrt(num);
        // Output the square root with 3 decimal places
        printf("Square root: %.3lf\n", root);
    }
    else
    {
        printf("Invalid input. Please enter a non-negative number.\n");
    }

    return 0;
}

