#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees memory allocated for a linked list
 * @head: pointer to first node of list to be freed
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (!head)
		return;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}

