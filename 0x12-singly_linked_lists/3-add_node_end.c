#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end -adds a new node at the end if linked list
 * @head: double pointer to list_t list
 * @str: string to add new node
 * Return: address of new element else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nd;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_nd = malloc(sizeof(list_t));
	if (!new_nd)
		return (NULL);

	new_nd->str = strdup(str);
	new_nd->len = len;
	new_nd->next = NULL;

	if (*head == NULL)
	{
		*head = new_nd;
		return (new_nd);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_nd;

	return (new_nd);
}
