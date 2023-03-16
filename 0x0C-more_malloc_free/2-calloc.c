/*
 * File: 2-calloc.c
 * Auth: Sess254
 */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 * of elements each of inputted byte size.
 *@nmemb: The number of elements.
 *@size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0; or the function fails -Null.
 * otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *fill;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	fill = mem;

	for (index = 0; index < (size * nmemb); index++)
		fill[index] = '\0';

	return (mem);
}
