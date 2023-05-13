#include "main.h"

/**
 * _memset - a function that fills n bytes of memory area
 * pointed to by s with constant byte b
 * @n: number of bytes to be filled
 * @s: pointer to the char memory area
 * @b: value to be filled
 * Return: s
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
