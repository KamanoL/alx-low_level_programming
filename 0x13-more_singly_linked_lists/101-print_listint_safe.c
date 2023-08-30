#include <stdio.h>
#include "lists.h"

size_t loop_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loop_listint_len - indicates number of nodes
 * @head: pointer to head
 * Return: if not looped else number nodes
 */

size_t loop_listint_len(const listint_t *head)
{
	const listint_t *car, *bus;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	car = head->next;
	bus = (head->next)->next;

	while (bus)
	{
		if (car == bus)
		{
			car = head;
			while (car != bus)
			{
				node++;
				car = car->next;
				bus = bus->next;
			}

			car = car->next;
			while (car != bus)
			{
				node++;
				car = car->next;
			}
			return (node);
		}

		car = car->next;
		bus = (bus->next)->next;
	}
	return (98);
}

/**
 * print_listint_safe - prints safely a linked list
 * @head: pointer to head
 * Return: nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, indx = 0;

	node = loop_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p} %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (indx = 0; indx < node; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

	printf("[%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
