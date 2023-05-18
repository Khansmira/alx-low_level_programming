#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 *
 * Return: NULL if function failed, or pointer otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, str, j  = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}

	str = len1 + n;

	ptr = malloc((str * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < len1; j++)
	{
		ptr[j] = s1[j];
	}
	for (j = 0; j < n; j++)
	{
		ptr[len1 + j] = s2[j];
	}
	ptr[str] = '\0';
	return (ptr);
}
