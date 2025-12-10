#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add the element to.
 * @key: The key of the element.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new, *temp;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    index = key_index((unsigned char *)key, ht->size);
    temp = ht->array[index];

    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value);
            free(temp->key);

            temp->key = strdup(key);
            temp->value = strdup(value);

            if (!temp->key || !temp->value)
                return (0);

            return (1);
        }
        temp = temp->next;
    }

    new = malloc(sizeof(hash_node_t));
    if (!new)
        return (0);

    new->key = strdup(key);
    new->value = strdup(value);

    if (!new->key || !new->value)
    {
        free(new->key);
        free(new->value);
        free(new);
        return (0);
    }

    new->next = ht->array[index];
    ht->array[index] = new;

    return (1);
}

