#include "main.h"

/**
 * flip_bits - counts bits to be changed
 * @n: initial number
 * @m: following number
 * Return: bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, cnt = 0;
	unsigned long int curr;
	unsigned long int random = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		curr = random >> y;
		if (curr & 1)
			cnt++;
	}

	return (cnt);
}
