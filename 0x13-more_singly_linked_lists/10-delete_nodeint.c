#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a certain index in a listint_t
 * @head: pointer to the first node in the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *curr = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (x < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		x++;
	}


	curr = tmp->next;
	tmp->next = curr->next;
	free(curr);

	return (1);
}

