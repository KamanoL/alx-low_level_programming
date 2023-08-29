#include "lists.h"

/**
 * delete_nodeint_at_index - removes nodein linked list
 * @head: pointer to first element
 * @index: node to remove
 * Return: 1 (Success) else -1 fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *curr = NULL;
	unsigned int t = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (t < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		t++;
	}

	curr = tmp->next;
	tmp->next = curr->next;
	free(curr);
return (1);
}
