/*
 * main.c
 *
 *  Created on: Oct 16, 2023
 *      Author: SMART
 */

#include <stdio.h>

int main() {
	int arr[10], freq[10];
	int size, i, j, count;

	printf("Enter size of array: ");
	scanf("%d", &size);

	printf("Enter elements in array: ");
	for(i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
		freq[i] = -1; // Initialize frequency array with -1
	}

	// Count the frequency of each element
	for(i = 0; i < size; i++)
	{
		count = 1;
		for(j = i + 1; j < size; j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
				freq[j] = 0; // Mark duplicate elements in the frequency array
			}
		}

		if(freq[i] != 0)
		{
			freq[i] = count;
		}
	}

	printf("\nUnique elements in the array are: ");
	// Print unique elements based on the frequency array
	for(i = 0; i < size; i++)
	{
		if(freq[i] == 1)
		{
			printf("%d ", arr[i]);
		}
	}

	return 0;
}

