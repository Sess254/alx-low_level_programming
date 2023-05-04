/*
 *File: 4-clear_bit.c
 *Auth: Sess254
 */

#include "main.h"

/**
 *clear_bit - sets value of bit to 0 at a given index
 *@index: index to set the value at
 *@n: pointer to the bit
 *
 *Return: 1 if it works - -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
