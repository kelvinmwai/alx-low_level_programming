#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a linked list
 * @head: double pointer to list_t list
 * @str: value to add to the new node
 *
 * Return: pointer to the new element, or NULL if error
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *temp = *head;

	if (!str)
		return (NULL);

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);

	add->str = strdup(str);
	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}
	add->len = len(add->str);
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = add;

	return (add);
}
/**
* len - returns the length of a string
* @str: string to find the length of
*
* Return: length of string
*/
int len(const char *str)
{
	int x;

	if (str == NULL)
		return (0);

	for (x = 0; str[x]; x++)
		;

	return (x);
}
