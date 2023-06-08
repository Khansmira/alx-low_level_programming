#include "main.h"

/**
 * set_bit - sets the bit to 1 at a given index
 * @n: pointer to the number
 * @index: index of bit to change
 * Return: Success(1) otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b_int = sizeof(long int) * 8;
	unsigned long int bit = 1;

	if (index >= b_int)
	{
		return (-1);
	}
	*n = *n | bit << index;
	return (1);
}
