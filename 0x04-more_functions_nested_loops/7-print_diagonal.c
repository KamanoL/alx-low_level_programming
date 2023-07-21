#include "main.h"

/**
 * print_diagonal - displays lines diagonally.
 *
 * @n: number of times \ is printed.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int t, c;

		for (t = 0; t < n; t++)
		{
			for (c = 0; c < n; c++)
			{
				if (c == t)
					_putchar('\\');

				else if (c < t)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
