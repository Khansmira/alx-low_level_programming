#include "main.h"

/**
 * swap_int - swaps the value of thetwo integers trhouh a pointer
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
	int m = *a;
	int c = *b;
	*a = c;
	*b = m;
}
