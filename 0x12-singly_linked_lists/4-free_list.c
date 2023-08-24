#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees linked list
 * @head: list_t list to free
 */

void free_list(list_t *head)
{
	list_t *que;

	while (head)
	{
		que = head->next;
		free(head->str);
		free(head);
		head = que;
	}
}
