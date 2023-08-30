#include "lists.h"

/**
 * find_listint_loop - finds loops in linked list
 * @head: limked list to search
 *
 * Return: address of node else NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slw = head;
	listint_t *fst = head;

	if (!head)
		return (NULL);

	while (slw && fst && fst->next)
	{

		fst = fst->next->next;
		slw = slw->next;
		if (fst == slw)
		{
			slw = head;
			while (slw != fst)
			{
				slw = slw->next;
				fst = fst->next;
			}
			return (fst);
		}
	}

	return (NULL);
}
