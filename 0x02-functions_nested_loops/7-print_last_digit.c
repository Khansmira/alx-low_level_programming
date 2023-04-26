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
	int mir = (n % 10);
		_putchar(mir + 48);
	return (mir);
}
