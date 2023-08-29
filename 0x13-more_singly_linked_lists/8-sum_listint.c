#include "lists.h"

/**
 * sum_listint - sums up all the data
 * @head: first node
 * Return: results
 */

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		add += tmp->n;
		tmp = tmp->next;
	}
return (add);
}
