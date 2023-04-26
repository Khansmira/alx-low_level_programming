#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: a character
 *
 * Return: 1 if its an alphabetic character or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
