#include "main.h"

/**
 * _strncpy - copies n bytes of strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *c = dest;

	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			*c = *src;
			src++;
			c++;
		}
		else
		{
			*c = '\0';
			c++;
		}
	}

	return (dest);
}
