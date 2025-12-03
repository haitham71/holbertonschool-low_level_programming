#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the dlistint_t list
 * @idx: index where the new node should be added, starting from 0
 * @n: integer to be added to the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h, *realnode = *h;
	if (h == NULL)

		return (NULL);
	realnode = malloc(sizeof(dlistint_t));
	if (realnode == NULL)
		return (NULL);
	realnode->n = n;
	if (idx == 0)
	{
		realnode->next = *h;
		realnode->prev = NULL;
		if (*h != NULL)
			(*h)->prev = realnode;
		*h = realnode;
		return (realnode);
	}
	if (*h == NULL)
	{
		free(realnode);
		return (NULL);
	}
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(realnode);
		return (NULL);
	}
	realnode->next = temp->next;
	realnode->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = realnode;
	temp->next = realnode;
	return (realnode);
}
