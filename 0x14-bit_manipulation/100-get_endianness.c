#include "main.h"

/**
 * get_endianness - confirms if machine big or little
 * Return: 1 if little else 0 if big
 */

int get_endianness(void)
{
	unsigned int y = 1;
	char *k = (char *) &y;

	return (*k);
}
