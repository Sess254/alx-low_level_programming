/*
 *File: 0-binary_to_uint.c
 *Auth: Sess254
 */

#include "main.h"
#include <stdio.h>

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointer to the string of 0 an 1 chars
 *
 *Return: the converted number, or 0 if
 * there is one or more chars in b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		number = (number << 1) + (b[i] - '0');
	}

	return (number);
}

