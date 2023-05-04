/*
 *File: 3-set_bit.c
 *Auth: Sess254
 */

#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *@index: the index to set the value at
 *@n:pointer to the bit
 *
 *Return: 1 if it works - -1 if an error ocurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n ^= (1 << index);

	return (1);
}
