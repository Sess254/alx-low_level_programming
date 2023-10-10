/*
 * File: 1-binary.c
 * Auth: Sess254
 */

#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: value, -1 if array is NULL or value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	int mid;
	int i;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");

		mid = (l + r) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}

	return (-1);
}
