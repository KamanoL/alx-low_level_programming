#include "main.h"


/**
 * print_numbers - prints charecters and or digits like (0 to 9).
 * Return: 0 always set
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 58; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
