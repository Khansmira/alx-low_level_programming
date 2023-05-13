#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: Argument counter
 * @argv: Argument value
 * Return: Always 0
 */
int main(int argc, char**argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}i
