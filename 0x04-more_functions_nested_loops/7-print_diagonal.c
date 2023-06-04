#include "main.h"

/**
 * print_diagonal - prints forward slashes diagonally
 * @n: input
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int j = 0;
	int i;

	while (n > 0)
	{
		i = j;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
		n--;
	}
	if (j < 1)
		_putchar('\n');
}
