#include "main.h"

/**
 * _strpbrk - entry function, searches for a string for any set of bytes
 * @s: string char
 * @accept: string char
 * Return: s on SUCCESS or 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
