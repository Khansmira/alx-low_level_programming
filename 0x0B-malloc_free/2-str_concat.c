#include "main.h"

/**
 * str_concat - concanates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to concanated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int Ls1 = 0;
	int Ls2 = 0;
	int i, j;

	if (!s1)
	{
		return ("");
	}
	if (!s2)
	{
		return ("");
	}

	while (s1[Ls1] != '\0')
	{
		Ls1++;
	}
	while (s2[Ls2] != '\0')
	{
		Ls2++;
	}
	s = malloc((Ls1 + Ls2 + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < Ls1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < Ls2; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';

	return (s);
}
