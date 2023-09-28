#include "main.h"

/**
 * flip_bits - determines the number of bits then changes
 * them from state 1 to another
 * @n: initial number
 * @m: following number
 * Return: bits changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t, cnt = 0;
	unsigned long int excl = n ^ m;
	unsigned long int currn;

	for (t = 63; t >= 0; t--)
	{
		currn = excl >> t;
		if (currn & 1)
			cnt++;
	}
	return (cnt);
}
