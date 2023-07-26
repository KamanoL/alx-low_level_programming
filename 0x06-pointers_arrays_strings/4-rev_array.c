#include "main.h"

/**
 * reverse_array - prints arrays inreverse
 * @a: value
 * @n: value
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int k, m;

	for (k = 0; k < n--; k++)
	{
		m = a[k];
		a[k] = a[n];
		a[n] = m;
	}
}
