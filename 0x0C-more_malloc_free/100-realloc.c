#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc
 * and free
 * @ptr: pointer to memory alllocated with malloc
 * @old_size: size of ptr
 * @new_size: size of new memory
 * Return: pointer to address memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *temp, *_st;
	unsigned int t = 0;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	temp = malloc(new_size);
	
	if (temp == NULL)
	{
		free(ptr);
		return (NULL);
	}
	_st = ptr;

	if (old_size > new_size)
	{
		old_size = new_size;
	}
	while (t < old_size)
	{
		temp[t] = _st[t];
		t++;
	}
	free(ptr);
	return (temp);
}
