#include "lists.h"

/**
 * pop_listint - removes the head head node
 * @head: poinre to first elememnt in linked list
 * Return: data removed inxide element else 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int no;

	if (!head || !*head)
		return (0);

	no = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
return (no);
}
