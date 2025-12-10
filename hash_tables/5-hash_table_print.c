#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int first = 1;

	if (ht == NULL)
		printf("{}");

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			first = 0;
			temp = temp->next;
		}
	}
	printf("}\n");
}
