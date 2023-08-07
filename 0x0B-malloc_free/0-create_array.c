#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * create_array - creates an array and initializes
 * it with a specific char
 * @size: the size of memory to print
 * @c: pointer
 * Return: str else NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
		return (NULL);

	for (i = 0; size > i; ++i)
		str[i] = c;
	return (str);
}
