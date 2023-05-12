#include "main.h"

/**
 * _strlen_recursion - Entry function that returns length of a string
 * @s: string char
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
