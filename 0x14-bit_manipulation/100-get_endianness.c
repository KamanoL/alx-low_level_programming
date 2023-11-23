#include "main.h"
/**
 * get_endianness - looks for size of a machine
 *
 * Return: 0 large else if small 1
 */

int get_endianness(void)
{
	unsigned int t = 1;
	char *l = (char *) &t;

	return (*l);
}
