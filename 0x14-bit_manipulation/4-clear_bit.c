#include "main.h"

/**
 * clear_bit - resets the bit 0
 * @n: pointer to reset to 0
 * @index: index to clear
 *
 * Return: 1 (Success) else -1 failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
