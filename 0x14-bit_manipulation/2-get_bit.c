#include "main.h"

/**
 * get_bit - gets the bit value at an index
 * @n: number to check bits
 * @index: index to check
 *
 * Return:value of bit at the index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b_int = sizeof(int) * 8;

	if (index >= b_int)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
