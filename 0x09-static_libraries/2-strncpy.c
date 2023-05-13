#include "main.h"

/**
 * _strncpy - copies n bytes of strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes to copy from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			*ptr = *src;
			src++;
			ptr++;
		}
		else
		{
			*ptr = '\0';
			ptr++;
		}
	}

	return (dest);
}
