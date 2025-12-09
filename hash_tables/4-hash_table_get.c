#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: the key to get the value of
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	char *value;
	hash_node_t *temp;
	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];

	if (temp == NULL)
		return (NULL);

	if (temp != NULL)
		while (strcmp(temp->key, key) != 0)
		{
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
		}

	value = temp->value;
	if (value == NULL)
		return (NULL);

	return (value);
}