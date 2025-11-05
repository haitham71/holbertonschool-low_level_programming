#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees memory allocated for a dog_t structure
 * @d: pointer to the dog_t structure to free
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}