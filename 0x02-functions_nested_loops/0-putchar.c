#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Description: prints '_putchar', followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char mir[] = "_putchar";
	int length = strlen(mir), i;

	for (i = 0; i < length; i++)
		_putchar(mir[i]);
	_putchar('\n');

	return (0);
}
