/*
 * File: 0-puts_recursion.c
 * Auth: Sess254
 */

#include "main.h"

/**
 * _puts_recursion - Prints a string, follwed by new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
