/*
 * File: 0-malloc_checked.c
 * Auth: Sess254
 */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - It allocates memory using malloc.
 * @b: The number of bytes allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
