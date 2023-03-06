/*
 * File: 4-strpbrk.c
 * Auth: Sess254
 */

#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes.
 * @s: The string to be serched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is marched - a pointer to be matched byte.
 * If no set matched - Null
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
