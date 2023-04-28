#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be check
 * Return: 1 if @c is uppercasse, 0 otherwisw
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
