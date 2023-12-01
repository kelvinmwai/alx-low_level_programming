#include "hash_tables.h"

/**
 * key_index - the key index of the current element
 * @key: The key to get the index
 * @size: size of the array item in the hash table.
 *
 * Return: The key index.
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
