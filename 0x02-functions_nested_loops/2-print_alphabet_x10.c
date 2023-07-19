#include "main.h"
/**
 * main - Entry point
 * Function to print 10 charectors
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int c;
	int k;

	for (k = 1; c <= 10; c++)
	{
		for (k = 97; k <= 122; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
