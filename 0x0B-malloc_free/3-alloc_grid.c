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
	int t, k;
	int **array;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (t = 0; t < height; ++t)
	{
		array[t] = (int *) malloc(sizeof(int) * width);
		if (array[t] == NULL)
		{

			free(array);
			for (k = 0; k <= t; ++k)
				free(array[k]);
			return (NULL);
		}
	}
	for (t = 0; t <= height; ++t)
	{
		for (k = 0; k < width; ++k)
		{
			array[t][k] = 0;
		}
	}
	return (array);
}
