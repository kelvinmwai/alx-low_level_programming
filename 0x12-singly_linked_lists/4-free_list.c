#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees memory allocated for a linked list
 * @head: pointer to first node of list to be freed
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

