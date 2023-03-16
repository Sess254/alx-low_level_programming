/*
 * File: 1-string_nconcat.c
 * Auth: Sess254
 */

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concantenates two strings
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to concantenate to s1.
 *
 * Return: If function fails - NULL.
 * otherwise a pointer to the concantenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conca;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	conca = malloc(sizeof(char) * (len + 1));

	if (conca == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		conca[len++] = s2[index];

	conca[len] = '\0';

	return (conca);
}
