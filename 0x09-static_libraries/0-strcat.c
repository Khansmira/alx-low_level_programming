#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: first string
 * @src: second string
 *
 * Return: a pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (ptr);
}
