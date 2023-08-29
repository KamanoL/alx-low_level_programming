#include "lists.h"

/**
 * add_nodeint_end - adds the last nodein linked list
 * @head: pointer to first element
 * @n: integer to insert new element
 * Return: pointer to new element else NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tmp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
	return (nw);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = nw;

return (nw);
}
