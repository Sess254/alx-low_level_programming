/*
 *File: 0-binary_to_uint.c
 *Auth: Sess254
 */

#include "main.h"
#include <stddef.h>

/**
 *binary_to_uint - converts a binary number to
 * an unsigned int.
 *@b:a pointer to a string  of 0 an 1 chars
 *
 *Return: converted number - 0 if theres one  or more
 *chars in string b thats not 0 and 1 - b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int i;

	if (b == NULL)
		return (0);


	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			number = number << 1;
		}

		else if (b[i] == '1')
		{
			number = (number << 1) | 1;
		}

		else
			return (0);

		i++;
	}

	return (number);

}
