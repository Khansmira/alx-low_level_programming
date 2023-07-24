#include "main.h"

/**
 * _strncat - concatenate two strings.
 * @dest: first string
 * @src: Second string
 * @n: number of bytes to concatenate from second string.
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *c = dest;

	while (*c != '\0')
	{
		c++;
	}

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*c = *src;
		src++;
		c++;
	}

	*c = '\0';

	return (dest);
}
