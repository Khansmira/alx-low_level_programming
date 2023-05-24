#include "function_pointers.h"
#include <stdio.h>

/* print_name - prints name
 * @name: name to be printed
 * @f: pointer to a function that prints name
 *
 * Return: Nothing
 */

void print_name(char *name, void(*f)(char *))
{
	if (f != NULL)
	{
		void (*new)(char *) = f;
		new(name);
	}
}
