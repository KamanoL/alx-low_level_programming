#include "main.h"

/**
 * get_bit - gives value of a bit as index in decimal number
 * @n: number searched for
 * @index: of bit
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_v;

	if (index > 63)
		return (-1);

	bit_v  = (n >> index) & 1;
	return (bit_v);
}
