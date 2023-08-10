#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates of an array
 * @nmemb: number of elements
 * @size: byte size
 * Return: pointer to allocated memory
 * if nmemb or size 0 return NULL
 * else fails return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		ptr[a] = 0;
	return (ptr);
}
