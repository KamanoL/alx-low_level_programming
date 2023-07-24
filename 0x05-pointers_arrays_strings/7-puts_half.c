#include "main.h"

/**
 * puts_half - puts half a string followed by a new line
 * @str: input
 */

void puts_half(char *str)
{
	int l, n;
	int count = 0;

	for (l = 0; str[l] != '\0'; l++)
	{
		count++;
	n = (count - 1) / 2;
	}
	for (l = n + 1; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
