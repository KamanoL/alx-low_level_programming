#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 decimal array
 * of intger
 * @width: width of matrix
 * @height: height of matrix
 * Return: pointer to matrix else NULL
 */

int **alloc_grid(int width, int height)
{
	int **array, t, k;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (t = 0; t < height; t++)
	{
		array[t] = (int *)malloc(sizeof(int) * width);
		if (array[t] == NULL)

		for (t--; t >= 0; t--)
		{
			free(array[t]);
			free(array);
			return (NULL);
		}
	}

	{
		for (t = 0; t < height; t++)
			for (k = 0; k < height; k++)
				array[t][k] = 0;
	}
	return (array);
}
