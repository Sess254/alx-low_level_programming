/*
 * File: 2-int_index.c
 * Auth: Sess254
 */

#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: Array of integers.
 * @size: Size of the array.
 * @cmp: Pointer to the function that compares values.
 *
 * Return: if no element matches or size <= 0 - -1.
 * otherwise the index of the first element of which cmp
 * function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
				return (index);
	}

	return (-1);
}
