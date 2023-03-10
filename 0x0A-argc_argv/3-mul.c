/*
 * File: 3-mul.c
 * Auth: Sess254
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the product of two numbers,followed by new line.
 * @argc: The number of arguments supplied to program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 *
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
