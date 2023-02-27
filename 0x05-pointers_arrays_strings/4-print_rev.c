/*
 * File: 4-print_rev.c
 * Auth: Sess254
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0, ind;

	while (s[ind++])
		len++;

	for (ind = len - 1; ind >= 0; ind--)
		_putchar(s[ind]);
	_putchar('\n');
}
