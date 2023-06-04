#include "main.h"

#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: double pointer
 *
 * Return: On success, a pointer or  NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int len = 0;
	int arg_len, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][arg_len] != '\0')
		{
			arg_len++;
			len++;
		}
		len++;
	}

	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		while (av[j][i] != '\0')
		{
			str[k++] = av[j][i++];
		}
		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}

