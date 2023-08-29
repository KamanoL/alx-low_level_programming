#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to first node
 * Return: pointer to first node in new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *bef = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = bef;
		bef = *head;
		*head = next;
	}

	*head = bef;
return (*head);
}
