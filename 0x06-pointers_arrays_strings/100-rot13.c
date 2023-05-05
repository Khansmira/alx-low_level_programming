#include "main.h"
/**
 * rot13 - Entry Function
 * @c: char
 * Return: s for SUCCESS
 */
char *rot13(char *c)
{

		if ((*c >= 'a' && *c <= 'm') || (*c >= 'A' && *c <= 'M'))
		*c += 13;
	else if ((*c >= 'n' && *c <= 'z') || (*c >= 'N' && *c <= 'Z'))
		*c -= 13;
	return (c);
}
