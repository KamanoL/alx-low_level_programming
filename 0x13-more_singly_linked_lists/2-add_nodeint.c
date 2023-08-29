#include "lists.h"

/**
 * add_nodeint - adds a node to linked list
 * @head: pointer to first node
 * @n: integer to insert node
 * Return: pointer to new node else NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;
return (nw);
}
