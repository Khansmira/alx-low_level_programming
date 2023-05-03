#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: an input string to be reversed
 * Return: Nothing
 */
void print_rev(char *s)
{
	int mir = 0;

	while (s[mir] != '\0')
		mir++;

	while (mir)
		_putchar(s[--mir]);

	_putchar('\n');
}
