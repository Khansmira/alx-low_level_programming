#include "main.h"

/**
 * print_last_digit - Print and return last digit of @n
 *
 * @n: number
 *
 * Return: last digit of @n
 */
int print_last_digit(int n)
{
	if (n >= 0 && n <= 9)
	{
		_putchar(n);
		return (n);
	}
	else
	{
		n = _abs(n % 10);
		_putchar(n + 48);
		return (n);
	}
}
