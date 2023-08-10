#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integer
 * @min: minimum value
 * @max: maximum value
 * Return: Newly created array else return NULL
 */

int *array_range(int min, int max)
{
	int *sr, *k;

	if (min > max)
		return (NULL);

	sr = malloc(sizeof(*sr) * ((max - min) + 1));

	if (sr == NULL)
		return (NULL);

	k = sr;

	while (min <= max)
		*k++ = min++;

return (sr);
}
