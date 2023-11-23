#include "main.h"

/**
 * binary_to_unit - changinges binary to unsigned int
 * @b: string with binary
 * Return: converted number
 */

unsigned int binary_to_unit(const char *b)
{
	int t;

	unsigned int decimal_val = 0;

	if (!b)
	{
		return (0);
	}
	for (t = 0; b[t]; t++)
	{
		if (b[t] < '0' || b[t] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[t] - '0');
	}
	return (decimal_val);
}
