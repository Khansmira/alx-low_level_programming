#include "main.h"

/**
 * get_endianness - detects endianess of the system
 *
 * Return: big endian is 1, little endian is 0
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *mir = (char *) &x;

	if (*mir == 1)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
