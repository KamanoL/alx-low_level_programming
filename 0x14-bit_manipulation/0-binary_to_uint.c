#include "main.h"

/**
 * binary_to_uint - changes binary number to unsigned int
 * @b: string with binary number
 * Return: changed number
 */

unsigned int binary_to_uint(const char *b)
{
	int t;
	unsigned int dec_v = 0;

	if (!b)
		return (0);

	for (t = 0; b[t]; t++)
	{
		if (b[t] < '0' || b[t] > '1')
			return (0);
		dec_v = 2 * dec_v + (b[t] - '0');
	}

	return (dec_v);
}
