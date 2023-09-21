#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list_t to be printed
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s/n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}

