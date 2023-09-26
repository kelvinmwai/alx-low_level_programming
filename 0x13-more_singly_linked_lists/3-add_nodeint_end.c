#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: pointer to the first value in the list
 * @n: value to assign tothe new node
 *
 * Return: pointer to the new node | NULL if error
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}

