#include "main.h"

/**
 * binary_to_uint - converts binary to an int
 * @b: string containing the binary number
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	for (; b && *b; b++)
	{
		if (*b == '1' || *b == '0')
		{
			uint = uint * 2 + (*b - '0');
		}
		else
		{
			return (0);
		}
	}
	return (uint);
}
