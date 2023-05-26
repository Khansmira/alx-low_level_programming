#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: a string that separates tne numbers
 * @n: number of integers to be printed.
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	va_list my_args;

	va_start(my_args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_args, int));

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(my_args);
}
