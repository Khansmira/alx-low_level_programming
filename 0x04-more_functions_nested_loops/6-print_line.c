#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of times the character prints
 * function prints a new line if @n is
 * 0 or less
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
