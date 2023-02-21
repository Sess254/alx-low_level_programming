/*
 * File: 2-print_alphabet_x10.c
 * Auth: sess254
 */

#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char c;

	while (count++ <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
