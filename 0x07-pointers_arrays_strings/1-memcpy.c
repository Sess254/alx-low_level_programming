/*
 * File: 1-memcpy.c
 * Auth: Sess254
 */

#include "main.h"

/**
 * _memcpy - Copies @n bytes from memory area pointed
 *           to by @src into pointed to by @dest.
 * @dest: A pointer to the memory arear to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
