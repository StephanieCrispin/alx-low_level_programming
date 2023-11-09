#include "hash_tables.h"

/**
 * key_index - create a hash table
 * @key: The key
 * @size: sizeof the table
 * Return - returns a hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
