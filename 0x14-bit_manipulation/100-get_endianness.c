/*
 *File: 100-get_endianness.c
 *Auth: Sess254
 */

#include "main.h"

/**
 * get_endianness - checks endianness
 *
 *Return: if big endian - 0, if little endian - -1
 */

int get_endianness(void)
{
	int n = 1;
	char *endian = (char *)&n;

	if (*endian == 1)
		return (1);

	return (0);
}
