#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: Argument counter
 * @argv: Argument value
 * Return: Always 0
 */
int main(int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

