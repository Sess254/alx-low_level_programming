/*
 * File: 0-whatsmyname.c
 * Auth: Sess254
 */

#include <stdio.h>

/**
 * main - Prints programs name followed by new line
 *@argc: The number of arguments supplied to program.
 *@argv: An  Array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
