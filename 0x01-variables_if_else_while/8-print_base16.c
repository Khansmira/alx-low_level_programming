#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (That is Success)
 */
int main(void)
{
	int n;
	char Lcase;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (Lcase = 'a'; Lcase <= 'f'; Lcase++)
		putchar(Lcase);
	putchar('\n');

	return (0);
}
