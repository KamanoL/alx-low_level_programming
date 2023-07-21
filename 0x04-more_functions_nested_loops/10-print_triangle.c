#include "main.h"

/**
 * print_triangle - makes a triangle followed by a new line
 *
 * @size: size of a triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, k;

		for (a = 1; a <= size; a++)
		{
			for (k = a; k < size; k++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= a; k++)
			{
				-putchar('#');
			}
			_putchar('\n');
		}
	}
}
