#include "main.h"

/**
 * rev_string - a function that reverses a string
 * followed by a new line
 * @s: an input string
 * Return: nothing
 */
void rev_string(char *s)
{
	int mir = 0, i = 0;
	char f;

	while (s[mir] != '\0')
		mir++;

	while (i < mir--)
	{
		f = s[i];
		s[i++] = s[mir];
		s[mir] = f;
	}
}
