#include "main.h"

/**
 * print_most_numbers - print some numbers except a select few like (2 and 4).
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int k;

	for (k = 48; k < 57; k++)
	{
		for (k != 50)
		{
			for (k != 52)
			{
				_putchar(k);
			}
		}

	}
	_putchar('\n');
}
