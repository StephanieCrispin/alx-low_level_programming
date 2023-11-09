#include "hash_tables.h"

/**
 * len_of_items_in_table - returns the length of a hash table
 * @ht: The hash table
 * Return: An int
 */

int len_of_items_in_table(hash_table_t *ht)
{
	int i, count;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			count += 1;
	}

	return (count);
}

/**
 * hash_table_print - prints out the items in a hash table
 * @ht: The first hash table argument
 */

void hash_table_print(const hash_table_t *ht)
{
	int i;
	int items_in_table_count = len_of_items_in_table(ht);
	if (ht == NULL)
		return;
	putchar("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			printf("%s : %s", ht->array[i]->key, ht->array[i]->value);
		if (i < items_in_table_count)
			putchar(",");
	}
	printf("}\n");
}
