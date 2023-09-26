#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head of linked list to traverse
 *
 * Return: index of the node where the loop starts | NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *en = head;
	listint_t *st = head;

	if (!head)
		return (NULL);

	while (en && st && st->next)
	{
		st = st->next->next;
		en = en->next;
		if (st == en)
		{
			en = head;
			while (en != st)
			{
				en = en->next;
				st = st->next;
			}
			return (st);
		}
	}
	return (NULL);
}

