#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from n to m
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xo_r = n ^ m;
	unsigned int i = 0;

	while (xo_r)
	{
		if (xo_r & 1)
		{
			i++;
		}
			xo_r >>= 1;
	}
	return (i);
}

