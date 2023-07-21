#include "main.h"

/**
 * print_most_numbers - print some numbers except a select few.
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int k;

	for (k = 48; k < 58; k++)
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
