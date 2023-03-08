/*
 * File: 5-sqrt_recursion.c
 * Auth: Sess254
 */

#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of a number
 * @num: Number to find the square root of.
 * @root: Root to be tested
 *
 *Return: If number has a natural square root - the square root.
 *If number does not have a square root - - 1.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to return the square root of.
 *
 * Return: If n has a natural square root - the natural squar root of n.
 * if n does not have a natural square roor - - 1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
