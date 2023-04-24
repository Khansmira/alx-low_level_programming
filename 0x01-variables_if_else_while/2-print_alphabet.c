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
	char LWcase;


	for (LWcase = 'a'; LWcase <= 'z'; LWcase++)
		putchar(LWcase);
	putchar('\n');

	return (0);
}

