#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Lcase;


	for (Lcase = 'a'; Lcase <= 'z'; Lcase++)
		putchar(Lcase);
	putchar('\n');

	return (0);
}

