#include "main.h"

/**
 * clear_bit - sets a bit to 0 at a given index
 * @n: pointer to the number to change
 * @index: index of bit to change
 * Return: 1 if succesful otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b_int = sizeof(long int) * 8, bit = 1;

	if (index >= b_int)
	{
		return (-1);
	}
	*n = (*n & ~(bit << index));
	return (1);
}
