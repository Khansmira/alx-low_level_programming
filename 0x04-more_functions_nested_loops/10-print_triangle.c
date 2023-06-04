#include "main.h"

/**
 * print_triangle - prints traingle with #
 * @size: size of triangle to print
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1 ; i <= size ; i++)
	{
		for (j = i ; j < size ; j++)
		{
			_putchar(' ');
		}
		for (j = 1 ; j <= i ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
