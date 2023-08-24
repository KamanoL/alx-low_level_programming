#include "lists.h"
#include <stdlib.h>

/**
 * list_len - number of elements in linked list
 * @h: pointer to list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
