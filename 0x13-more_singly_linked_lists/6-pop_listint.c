#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: pointer to the first node in the linked list
 *
 * Return: the data inside the deleted node | 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val;

	if (!head || !*head)
		return (0);

	val = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (val);
}
	
