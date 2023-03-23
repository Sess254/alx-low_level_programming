/*
 * File: 0-sum_them_all.c
 * Auth: Sess254
 */

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: Variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0
 * otherwise - the sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
