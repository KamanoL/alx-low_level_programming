#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node the beginning of linked list
 * @head: double pointer to list_t list
 * @str: new string to add in a node
 * Return: address of new element or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nd;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new_nd)
		return (NULL);

	new_nd->str = strdup(str);
	new_nd->len = len;
	new_nd->next = (*head);
	(*head) = new_nd;

	return (*head);
}
