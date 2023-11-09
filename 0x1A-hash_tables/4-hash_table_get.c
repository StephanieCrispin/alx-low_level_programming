#include "hash_tables.h"

/**
 * hash_table_get - gets from a hash table
 * @ht: table item to be gotten
 * @key: The key to get it
 * Return: A char pointer argument
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hashed = NULL;

	if (ht == NULL || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	hashed = ht->array[index];

	for (; hashed != NULL; hashed = hashed->next)
	{
		if (strcmp(hashed->key, key) == 0)
			return (hashed->value);
		/* otherwise keeps looking */
		hashed = hashed->next;
	}
	/* if the index is not found cuz the ley doesn't exists */
	return (NULL);
}
