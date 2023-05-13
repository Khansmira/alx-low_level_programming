#include "main.h"

/**
 * _memcpy - function copies n bytes from src to dest
 * @dest: pointer to destination
 * @src: pointer to source data
 * @n: number of bytes to be copied
 * Return: dest
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
