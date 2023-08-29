#include "lists.h"

/**
 * print_listint - prints elements of linked list
 * @h: linked list to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		printf("%d\n", h->n);
		no++;
		h = h->next;
	}
	return (no);
}
