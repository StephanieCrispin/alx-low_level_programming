#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: sizeof the table
 * Return: returns a hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{

    long unsigned int i = 0;
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
    newTable->array = (hash_node_t **)calloc(newTable->size, sizeof(hash_node_t *));

    if (newTable->array == NULL)
    {
        free(newTable);
        return (NULL);

        for (i = 0; i < size; i++)
            newTable->array[i] = NULL;

        return newTable;
    }