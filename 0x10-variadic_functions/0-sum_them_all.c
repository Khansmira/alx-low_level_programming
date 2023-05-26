#include "variadic_functions.h"

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

	va_start(my_args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		j = va_arg(my_args int);
		{
			sum = sum + j;
		}
	}
	va_end(my_args);
	return (sum);
}
