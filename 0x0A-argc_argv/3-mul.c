#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry function multiplies two numbers
 * @argc: Arguments counter
 * @argv: Arguments values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	return (0);
}
