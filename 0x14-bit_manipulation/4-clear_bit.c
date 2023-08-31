#include "main.h"

/**
 * clear_bit - removes the value and returns 0
 * @n: pointer to number
 * @index: bit to clear
 * Return: 1 (Success) else -1 failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
