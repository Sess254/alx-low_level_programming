/*
 * File: 100-jump.c
 * Auth: Sess254
 */

#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (array[prev] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			break;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			(unsigned long)(prev - sqrt(size)),
			(unsigned long)(prev));

	prev = prev - sqrt(size);

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev >= size)
			return (-1);
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return (prev);
	}

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	return (-1);
}
