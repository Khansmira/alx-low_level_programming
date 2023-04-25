#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char Lcase;

	for (Lcase = 'z'; Lcase >= 'a'; Lcase--)
		putchar(Lcase);
	putchar('\n');
	return (0);
}
