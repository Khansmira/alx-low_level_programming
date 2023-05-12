#include "main.h"

/**
 * _pow_recursion - Entry function returns value of x raised to power y
 * @x: value to raise
 * @y: valuue to raise x to
 * Return: raised value otherwise
 * 1 if y is equal to 0 or -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
