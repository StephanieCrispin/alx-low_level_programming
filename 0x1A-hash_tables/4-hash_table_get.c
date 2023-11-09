#include "hash_tables.h"

/**
 * hash_table_get - gets an item from a hash table
 * @ht: table item
 * @key: The key
 * Return: A char pointer
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/*Searches for hashtable key and returns null if it doesnt exist*/
	unsigned long int index = hash_djb2(key);
	unsigned long int keyIndex = key_index(index, ht->size);
	hash_node_t *item = ht->array[keyIndex];

	if (keyIndex != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return item->value;
	}
	return (NULL);
}
