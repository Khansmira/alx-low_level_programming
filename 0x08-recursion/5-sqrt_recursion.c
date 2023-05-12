#include "main.h"
/**
 * _sqrt - finds the square root number
 * @n: number is squared and compared against i
 * @i: base number
 * Return: natural square root of number i or -1 if otherwise
 */
int _sqrt(int n, int i)
{
	if (n * n == i)
		return (n);
	if (n * n > i)
		return (-1);
	return (_sqrt(n + 1, i));
}

/**
 * _sqrt_recursion - returns the natural square root of a number n.
 * @n: integer to find square root
 * Return: the natural square root of number n or -1 if otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}
