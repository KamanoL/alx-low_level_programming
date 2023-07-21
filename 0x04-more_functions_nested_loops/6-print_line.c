#include "main.h"

/**
 * print_line - makes a straight line within the terminal.
 * @n: the number of times _ is printed
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		int t;

		for (t = 1; t <= n; t++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
