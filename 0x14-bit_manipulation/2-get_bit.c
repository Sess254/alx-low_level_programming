/*
 *File: 2-get_bit.c
 *Auth: Sess254
 */

#include "main.h"

/**
 * get_bit - prints value of a bit at a given index
 *@n: the bit
 *@index: index to get the value at
 *
 *Return: value of bit at index - -1 if theres an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (1);
}
