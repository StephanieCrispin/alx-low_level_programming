#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: sizeof the table
 * Return: returns a hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    if (!size)
        return (NULL);

    int i = 0;
    /*Creates a new hashtable*/

    hash_table_t *newTable = malloc(sizeof(hash_table_t));
    newTable->size = size;
    newTable->array = (hash_node_t **)calloc(newTable->size, sizeof(hash_node_t *));

    for (i = 0; i < size; i++)
        newTable->array[i] = NULL;

    return newTable;
}