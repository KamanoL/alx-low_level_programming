#include "main.h"

/**
 * print_square - prints size of a square and a new line.
 *
 * @size: size of a square
 *
 * Return: 0
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int c;
		int t;

		for (c = 0; c < size; c++)
		{
			for (t = 0; t < size; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
