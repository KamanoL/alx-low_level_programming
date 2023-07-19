#include "main.h"

/**
 * main - Entry point
 * Prints alphabets in lower case
 * Return: 0
 */

void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

}
