#include "main.h"
/**
 * _strspn - Entry Function that gets length of a prefix substring
 * @s: char character
 * @accept: char character
 * Return: len (SUCCESS)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len, i, j;

	len = 0;
	i = j;
	for (i = 0; s[i] != '/0'; i++)
	{
		for (j = 0; accept[j] != '/0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		while (accept[j] == '/0')
		{
			return (len);
		}
	}
	return (len);
}
