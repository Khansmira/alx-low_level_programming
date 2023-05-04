#include "main.h"

/**
 * string_toupper - changes string from lower case to uppercase
 * @str: string
 *
 * Return: the changed string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (ptr);
}
