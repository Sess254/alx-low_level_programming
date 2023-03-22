/*
 * File: 1-array_iterator.c
 * Auth: Sess254
 */

#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as parameter
 * of each element of an array
 * @array: The array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
