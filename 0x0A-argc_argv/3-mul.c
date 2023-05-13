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
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
		return (0);
	}
}
