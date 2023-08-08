#include "main.h"
#include <stdlib.h>

/**
 * argstostr - links all arguments of the program
 * @ac:argument count
 * @av: argument vector
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int k, t, a, len = 0;
	char *str, *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		s = av[k];
		t = 0;

		while (s[t++])
		len++;

	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (k = 0; t < ac && k < len; t++)
	{
		s = av[t];
		a = 0;

	}
	while (s[a])
	{
		str[k] = '\0';
	}
		return (str);
}
