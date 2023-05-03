#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: An input string with length to be calculated
 * Return: 0 if successful
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s = s + 1;
	}
	return (length);
}
