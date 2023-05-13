#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: first string
 * @src: Second string
 * @n: number of bytes to concatenate from second string.
 *
 * Return:a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*ptr = *src;
		src++;
		ptr++;
	}

	*ptr = '\0';

	return (dest);
}
