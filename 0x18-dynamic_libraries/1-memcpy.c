#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: memory area copied from
 * @src: memory area copied to
 * @n: number of bytes to copy
 *
 * Return: dest on success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
