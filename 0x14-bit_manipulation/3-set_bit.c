#include "main.h"

/**
 * set_bit - changes a bit of a given index to 1
 * @n: pointer
 * @index: index to set
 * Return: 1 (Success) else -1 failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
