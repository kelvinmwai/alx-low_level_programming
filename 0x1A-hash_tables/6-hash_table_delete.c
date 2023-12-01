#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: pointer to the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp_node;
	unsigned long int y;

	for (y = 0; y < ht->size; y++)
	{
		if (ht->array[y] != NULL)
		{
			node = ht->array[y];
			while (node != NULL)
			{
				tmp_node = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp_node;
			}
		}
	}
	free(head->array);
	free(head);
}
