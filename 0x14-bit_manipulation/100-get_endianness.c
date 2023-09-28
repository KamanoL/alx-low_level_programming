#include "main.h"

/**
 * get_endianness - looks for the size of a machine
 *
 * Return: 0 large else 1 small
 */

int get_endianness(void)
{
	unsigned int t = 1;
	char *l = (char *) &t;

	return (*l);
}
