#include "main.h"

/**
 * is_prime_number - Entry Function to check prime number
 * @n: integer
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_prime(n, 2));
}

/**
 * _prime  - Entry Function to check for prime
 * @n: integer
 * @i: integer
 * Return: 1 if n is a prime number, 0 if not
 */
int _prime(int n, int i)
{
	if (i = 1)
		return (1);
	else if (n % i == 0 || n < 0)
		return (0);
	else
		return (_prime(n, i + 1));
}
