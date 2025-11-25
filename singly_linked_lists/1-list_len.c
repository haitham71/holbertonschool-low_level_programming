#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
size_t i = 0;
if(!h)
{
return(i);
}
while (h != NULL)
{
if(h == NULL)
{
printf("[0] (nil)\n");
}
i++;
h = h->next;
}

return (i);
}
