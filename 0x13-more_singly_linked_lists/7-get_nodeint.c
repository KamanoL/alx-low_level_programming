#include "lists.h"

/**
 * get_nodeint_at_index - returns node of an index
 * @head: first node
 * @index: node tko be returned
 * Return: node to be found else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t = 0;
	listint_t *tmp = head;

	while (tmp && t < index)
	{
		tmp = tmp->next;
		t++;
	}
return (tmp ? tmp : NULL);
}
