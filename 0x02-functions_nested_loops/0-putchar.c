#include <string.h>
#include "main.c"

/**
 * main - Entry point
 *
 * Description: prints '_putchar', followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char MIR[] = "_putchar";
	int length = strlen(MIR), i;

	for (i = 0; i < length; i++)
		_putchar(MIR[i]);
	_putchar('\n');

	return (0);
}
