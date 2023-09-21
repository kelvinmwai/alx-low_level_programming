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

	if (!head)
		return (NULL);
	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	if (*head == NULL)
		add->next = NULL;
	else
			add->next = *head;
		add->str = strdup(str);
		add->len = len(str);
		*head = add;
	return (*head);
}

/**
* len - returns the length of a string.
* @s : string to get length of
* Return: string length
*/
int len(const char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
