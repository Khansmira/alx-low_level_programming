#include "main.h"
#include <stdio.h>

/**
 *  print_diagsums - Entry Function prints sum of 2 diagonals of a square
 *  matrix of integers
 *  @a: int array
 *  @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = *(a + i * size + i);
		sum2 = *(a + (size - 1 - i) * size + i);
	}
	printf("%d, %d\n", sum1, sum2);
}
