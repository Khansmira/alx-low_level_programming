#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string
 *
 * Return: string encoded.
 */

char *leet(char *s)
{
	int i;
	char *old = "aAeEoOtTlL";
	char *new = "4433007711";
	char *p = s;

	while (*s)
	{
		i = 0;
		while (old[i] != '\0')
		{
			if (old[i] == *s)
			{
				*s = new[i];
			}
			i++;
		}
		s++;
	}
	return (p);
}
