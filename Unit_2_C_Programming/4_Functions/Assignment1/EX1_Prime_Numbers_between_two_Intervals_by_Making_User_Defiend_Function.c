/*
 * EX1_Prime_Numbers_between_two_Intervals_by_Making_User_Defiend_Function.c
 *
 *  Created on: Oct 10, 2023
 *      Author: Roaa Aiman
 */
#include <stdio.h>

int isPrime(int num);

int main() {
    int firstnumber, secondnumber;

    printf("Enter two numbers (intervals): ");
    fflush(stdout);
    scanf("%d %d", &firstnumber, &secondnumber);

    int primeFound = 0; // Flag to indicate if any prime number is found

    printf("Prime numbers between %d and %d are:\n", firstnumber, secondnumber);

    for (int i = firstnumber; i <= secondnumber; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
            primeFound = 1; // Set the flag indicating a prime number is found
        }
    }

    if (!primeFound)
    {
        printf("There are no prime numbers between %d and %d\n", firstnumber, secondnumber);
    }

    return 0;
}

/* ---------------------- Functions Definition ----------------------------*/

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
