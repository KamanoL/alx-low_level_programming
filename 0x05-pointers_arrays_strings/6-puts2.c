#include "main.h"

/**
 * puts2 - funtction that prints a single character from two
 * followed by a new line
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longt = 0;

	int l = 0;

	char *c = str;

	int o;

	while (*c != '\0')
	{
		c++;
		longt++;
	}
	l = longt - 1;
	for (o = 0; o <= l; o++)
	{
	if (o % 2 == 0)
	{
	_putchar(str[o]);
	}
	}
	_putchar('\n');
}
