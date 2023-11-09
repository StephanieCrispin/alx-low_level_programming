#include "hash_tables.h"
/**
 * hash_table_delete - deletes from a hash table
 * @ht: the hash table to be deleted
 * Return: nada
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *global_hash_nodes;
	hash_node_t *aux;

	if (ht == NULL)
		return;

	x = 0;

	while (x < ht->size)
	{
		global_hash_nodes = ht->array[x];
		while (global_hash_nodes)
		{
			aux = global_hash_nodes;
			global_hash_nodes = global_hash_nodes->next;
			free(aux->key);
			free(aux->value);
			free(aux);
		}
		x++;
	}

	free(ht->array);
	free(ht);
}
