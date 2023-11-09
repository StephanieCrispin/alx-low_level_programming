#include "hash_tables.h"

/**
 * hash_table_print - prints from a hash table
 * @ht: table item to be gottten
 * @key: The key to get it
 * Return: A char pointer
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash_n;
	int global_nodes_counter = 0;
	unsigned long int x;
	/*long unsigned int lenght;*/

	/* if NULL returns void and prints nothing just {} */
	if (ht == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		hash_n = ht->array[x];
		while (hash_n)
		{
			if (global_nodes_counter)
				printf(", ");
			printf("'%s': '%s'", hash_n->key, hash_n->value);
			hash_n = hash_n->next;
			global_nodes_counter++;
		}
	}
	printf("}\n");
}
