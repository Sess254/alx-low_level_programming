/*
 * File: 0-linear.c
 * Auth: Sess254
 */

#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array of ints using linear
 *                 search algorithm
 * @array: pointer to the first element of array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the value, -1 if array is NULL or not present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
