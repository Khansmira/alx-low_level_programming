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
	char LU_case;

	for (LU_case = 'a'; LU_case <= 'z'; LU_case++)
		putchar(LU_case);
	for (LU_case = 'A'; LU_case <= 'Z'; LU_case++)
		putchar(LU_case);
	putchar('\n');

	return (0);
}
