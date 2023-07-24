#include "main.h"

/**
 * swap_int - a function that swaps two values of intergers
 *@a: int to swap
 *@b: int to swap
 *return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
