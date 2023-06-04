#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Function
 * @argc: int
 * @argv: char
 * Return: returns the result of the operation
 */
int main(int argc, char *argv[])
{
	int nbr1, nbr2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	nbr1 = atoi(argv[1]);
	op = argv[2];
	nbr2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && nbr2 == 0) || (*op == '%' && nbr2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(nbr1, nbr2));
	return (0);
}
