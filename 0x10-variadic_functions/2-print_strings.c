#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line.
 * @separator: strings separator
 * @n: number of strings
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *m;
	va_list my_args;

	va_start(my_args, n);

	for (i = 0; i < n; i++)
	{

		m = va_arg(my_args, char *);
		if (m == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", m);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(my_args);
}

