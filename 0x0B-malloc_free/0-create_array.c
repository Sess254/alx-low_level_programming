/*
 * File: 0-create_array.c
 * Auth: Sess254
 */

#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars and
 *intitializes it with a specific char.
 *@size: The size of array to be initialized
 *@c: The specific char to initaialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 * otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
