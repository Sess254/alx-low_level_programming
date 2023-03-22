/*
 * File: 0-print_name.c
 * Auth: Sess254
 */

#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: Name to be printed.
 * @f: Pointer to a function that prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
