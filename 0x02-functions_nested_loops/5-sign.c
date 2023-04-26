#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: number
 * Return:
 * 1 if @n is greater than zero
 * 0 if @n is zero
 * -1 if @n is less than zero
 */
int print_sign(int n)
{
	int mir;

	if (n > 0)
	{
		mir = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		mir = 0;
		_putchar('0');
	}
	else
	{
		mir = -1;
		_putchar('-');
	}
	return (mir);
}
