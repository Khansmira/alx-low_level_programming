#include <stdio.h>

/**
 * main - prints numbers from 1 - 100 but replace  mulitplies of 5 with
 * Buzz, mulitples of 3 with Fizz and multiples of 3 and 5 with FizzBuzz.
 *
 * Return: 0
 */

int main(void)
{
	int mir;

	for (mir = 1; mir <= 100; mir++)
	{
		if (mir % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (mir % 5 == 0)
		{
			printf("Buzz");
		}
		else if (mir % 5 == 0 && mir % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", mir);
		}
	}
	printf("\n");

	return (0);
}
