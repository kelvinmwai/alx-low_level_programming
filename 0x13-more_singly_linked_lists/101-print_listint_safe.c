#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of nodes in a looped listint_t list
 * @head: A pointer to the first element of the list
 *
 * Return: The number of unique nodes in the list | if it fails to loop
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nds = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nds++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nds++;
				tortoise = tortoise->next;
			}

			return (nds);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list (safely)
 * @head: A pointer to the first node  of the listint_t list.
 *
 * Return: number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nds, i = 0;

	nds = looped_listint_len(head);

	if (nds == 0)
	{
		for (; head != NULL; nds++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nds; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nds);
}

