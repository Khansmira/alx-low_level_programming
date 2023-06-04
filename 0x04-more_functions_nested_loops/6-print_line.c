#include "main.h"

/**
 * print_line - prints a line 
 * @n: number of dashes
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
