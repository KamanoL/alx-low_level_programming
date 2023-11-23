#include "main.h"

/**
 * print_binary - returns binary equivalent to a decimal
 * @n: integer to return in binary form
 * Return: none
 */

void  print_binary(unsigned long int n)
{
	int t, cnt = 0;
	unsigned long int curr;

	for (t = 63; t >= 0; t--)
	{
		curr = n >> t;

		if (curr & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
