#include "hash_tables.h"
/**
 * hash_table_get - retrieves a val
 * @ht: is the hash ta
 * @key: is the key I'm looking fo
 * Return: the value associated wi
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hash_nodes = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	/*checks for somethin*/
	hash_nodes = ht->array[index];
	while (hash_nodes != NULL)
	{
		/* if the passed key is in the hash table*/
		if (strcmp(hash_nodes->key, key) == 0)
			return (hash_nodes->value);
		/* otherwise keeps looking */
		/*chacks for something*/
		hash_nodes = hash_nodes->next;
	}
	/* if the index is not found cuz the ley doesn't exists */
	return (NULL);
}
