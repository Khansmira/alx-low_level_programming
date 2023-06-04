#include "main.h"

/**
 * _strdup - craetes string duplicate and returns pointer to
 * newly allocated space in memory
 * @str: string to be duplicated
 *
 * Return: pointer to duplicated string or NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		j++;
	}

	s = malloc((i + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < j; i++)
		{
			*(s + i) = str[i];
		}
	}
	return (s);
}
