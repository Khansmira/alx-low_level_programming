#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area by pointer s with constant byte b
 * @s: pointer to char memory
 * @b: byte to be filled
 * @n: number of bytes to be filled.
 * Return: Char s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
