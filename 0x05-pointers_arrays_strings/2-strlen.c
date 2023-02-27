/*
 * File: 2-strlen.c
 * Suth: Sess254
 */

#include "main.h"

/**
 * _strlen - Returns lenght of a string.
 * @str: The string to get the length of.
 *
 * Return: lenght of @str.
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}
