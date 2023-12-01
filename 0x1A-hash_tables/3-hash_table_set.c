#include "hash_tables.h"

/**
 * hash_table_set - Adds a new item to Hash table.
 * @ht: Pointer to the hash table.
 * @key: The key of the new item
 * @value: The pair value of the key.
 *
 * Return: 1, or 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *val_copy;
	unsigned long int index, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (x = index; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = val_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = val_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
