#include "main.h"

/**
 * _puts - function thats prints strings and a new line after
 * @str: the string to prin
 */

void _puts(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
