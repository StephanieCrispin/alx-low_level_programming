#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: Hash table argument
 */
void hash_table_delete(hash_table_t *ht)
{
	int i;
	int j;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ht->array[i] = NULL;
		}
	}

	for (j = 0; j < ht->size; j++)
		free(ht->array[j]);

	free(ht->array);
	free(ht);
}
