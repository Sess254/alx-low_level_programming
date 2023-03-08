/*
 * File: 2-strlen_recursion.c
 * Auth: Sess254
 */

#include "main.h"

/**
 * _strlen_recursion - function that returns lenth of a string.
 * @s: The string to be measured.
 *
 * Return: The lenght of string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
