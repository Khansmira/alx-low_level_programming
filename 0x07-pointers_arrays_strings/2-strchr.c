#include "main.h"

/**
 * _strchr - function locates character in a string
 * @c: character to be located
 * @s: string
 * Return: string after character or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0' && *s == c)
	{
		return (s);
	}

	return (s + 1);
}
