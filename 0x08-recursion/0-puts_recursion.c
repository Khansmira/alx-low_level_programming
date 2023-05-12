#include "main.h"

/**
 * _puts_recursion - Entry function that prints a string followed by new line
 * @s: string char
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
