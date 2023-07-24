#include "main.h"

/**
 * _strpbrk -  searches the input string 's' for the first occurrence of any
 * character from the set of characters defined in the string 'accept'
 * @s: source string
 * @accept: bytes to check
 * Return: s string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
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
