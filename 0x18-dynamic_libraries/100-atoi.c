#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted that contains an integer
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int c = 1;
	unsigned int sum = 0;
	int d = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
			c *= -1;
		else if (*s >= '0' && *s <= '9')
			break;
	}
	while (*s >= '0' && *s <= '9')
	{
		sum *= 10;
		sum += *s - '0';
		s++;
	}

	if (c == -1)
		d = -sum;
	else
		d = sum;

	return (d);
}
