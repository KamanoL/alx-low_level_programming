#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node
 * @head: pointer to first node
 * @idx: index to add node
 * @n: integer to insert node
 * Return: pointer to node else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int t;
	listint_t *nw;
	listint_t *tmp = *head;

	nw = malloc(sizeof(listint_t));

	if (!nw || !head)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}

	for (t = 0; tmp && t < idx; t++)
	{
		if (t == idx - 1)
		{
			nw->next = tmp->next;
			tmp->next = nw;
			return (nw);
		}

		else
			tmp = tmp->next;
	}
	return (NULL);
}
