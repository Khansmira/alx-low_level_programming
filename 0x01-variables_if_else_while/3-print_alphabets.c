#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * prints lower and upper case alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char LPcase;

	for (LPcase = 'a'; LPcase <= 'z'; LPcase++)
		putchar(LPcase);
	for (LPcase = 'A'; LPcase <= 'Z'; LPcase++)
		putchar(LPcase);
	putchar('\n');

	return (0);
}
