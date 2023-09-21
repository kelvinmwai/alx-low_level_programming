#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a linked list
 * @head: head of list_t list
 * @str: value to add in the node
 *
 * Return: address of the new element and NULL if it gives an error
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int len = 0;

	while (str[len])
		len++;

	add = malloc(sizeof(list_t));
	if (!add)
	{
		return (NULL);
	}

	add->str = strdup(str);
	add->len = len;
	add->next = (*head);
	(*head) = add;

	return (add);
}

