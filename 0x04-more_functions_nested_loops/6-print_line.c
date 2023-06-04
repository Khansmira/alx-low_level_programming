#include "main.h"

/**
 * print_line - prints a straight line using int number of dashes
 *
 * @n: number of dashes
 *
 * Return: output
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('-');
		i++;
	}
	_putchar('\n');
}
