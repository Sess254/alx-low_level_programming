/*
 * File: 6-is_prime_number.c
 * Auth: Sess254
 */

#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if number is divisible.
 * @num: The number to be checked
 * @div: The divisor
 *
 * Return: if number is divisible - 0.
 * if number is not divisible - 1.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if number is prime
 * @n: Number to be checked.
 *
 * Return: If number is not prime  - 0.
 * if number is prime return - 1.
 */
int is_prime_number(int n)
{
int div = 2;

if (n <= 1)
return (0);

if (n >= 2 && n <= 3)
return (1);

return (is_divisible(n, div));
}
