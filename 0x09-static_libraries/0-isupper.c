#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if character is lowercase
 *
 * @c: an input character
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
