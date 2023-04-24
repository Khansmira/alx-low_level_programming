#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * prints all lowercase alpabets except e and q
 *
 * Return: Always 0 (That is Success)
 */

int main(void)
{
	char Lcase, e, q;

	e = 'e';
	q = 'q';

	for (Lcase = 'a'; Lcase <= 'z'; Lcase++)
	{
		if (Lcase != e && Lcase != q)
			putchar(Lcase);
	}
	putchar('\n');

	return (0);
}
