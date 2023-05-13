#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: Arguments counter
 * @argv: Arguments values
 * Return: 0 on succes and 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
		return (0);
	}
}
