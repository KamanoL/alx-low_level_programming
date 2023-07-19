#include "main.h"

/**
 * main - Entry point
 * Prints alphabets in lower case
 * Return: 0
 */
void _putchar(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
