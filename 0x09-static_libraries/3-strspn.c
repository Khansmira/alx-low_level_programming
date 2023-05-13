#include "main.h"
/**
 * _strspn - Entry Function that gets length of a prefix substring
 * @s: char character
 * @accept: char character
 * Return: len (SUCCESS)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;

	i = j = len = 0;

	if (*s == '\0' || *accept == '\0')
	{
		return (len);
	}

	while (s[j] != ',')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[j] == accept[i])
			{
				len++;
			}
			i++;
		}
		j++;
	}
	return (len);
}
