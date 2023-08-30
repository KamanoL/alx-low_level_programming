#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - indicates number of nodes
 * @head: pointer to head
 * Return: if not looped else number nodes
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *car, *bus;
	size_t nodes = 1;

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
				nodes++;
				car = car->next;
				bus = bus->next;
			}

			car = car->next;
			while (car != bus)
			{
				nodes++;
				car = car->next;
			}

			return (nodes);

		}

		car = car->next;
		bus = (bus->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints safely a linked list
 * @head: pointer to head
 * Return: nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
