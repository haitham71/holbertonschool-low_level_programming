#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table, or NULL on failure
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL || size == 0)
		return (0);

	hash = hash_djb2(key);
	return (hash % size);
}
