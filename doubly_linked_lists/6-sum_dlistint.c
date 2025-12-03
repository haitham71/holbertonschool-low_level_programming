#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: pointer to the head of the dlistint_t list
 *
 * Return: sum of all the data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
