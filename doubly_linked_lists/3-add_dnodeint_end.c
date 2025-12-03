#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the dlistint_t list
 * @n: integer to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *m, *i;

	if (!head)
		return (NULL);

	m = malloc(sizeof(dlistint_t));
	if (m == NULL)
		return (NULL);

	m->n = n;
	m->next = NULL;

	if (*head == NULL)
	{
		m->prev = NULL;
		*head = m;
		return (*head);
	}

	i = *head;
	while (i->next != NULL)
		i = i->next;

	i->next = m;
	m->prev = i;

	return (m);
}
