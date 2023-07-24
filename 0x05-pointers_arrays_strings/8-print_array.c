#include "main.h"

/**
 * print_array - a function thats prinyts arrays
 * @a: array name
 * @n: is the number of arrays to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
	}
		if (k < n - 1)
		{
			printf(",");
		}
		printf("\n");
}
