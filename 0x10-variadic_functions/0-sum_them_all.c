#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, j;

	va_list my_args;

	if (n == 0)
	{
		return (0);
	}
	va_start(my_args, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(my_args, int);
	}

	va_end(my_args);

	return (sum);
}
