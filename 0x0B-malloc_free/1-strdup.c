#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a newly allocated space in memory
 * @str: string to duplicate
 * Return: pointer to string else NULL
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *duplicate;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	else 
		for (i = 0; i < len; ++i)
		duplicate[i] = str[i];
return (duplicate);
}
