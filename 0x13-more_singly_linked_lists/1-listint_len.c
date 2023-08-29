#include "lists.h"

/**
 * listint_len - returnsnumber of elements in linked lists
 * @h: linked listto traverse
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		no++;
		h = h->next;
	}
	return (no);
}
