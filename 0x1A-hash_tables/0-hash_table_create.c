#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: sizeof the table
 * Return: returns a hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	unsigned long int i = 0;
	hash_table_t *newTable;

	if (!size)
		return (NULL);
	/*Creates a new hashtable*/

	newTable = malloc(sizeof(hash_table_t));

	if (!newTable)
	{
		return (NULL);
	}
	newTable->size = size;
	/* The  calloc()  function allocates memory for an array */
	/* void *calloc(size_t nmemb, size_t size) */
	newTable->array =
			(hash_node_t **)calloc(newTable->size, sizeof(hash_node_t *));

	if (newTable->array == NULL)
	{
		free(newTable);
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			newTable->array[i] = NULL;
	}

	return (newTable);
}
