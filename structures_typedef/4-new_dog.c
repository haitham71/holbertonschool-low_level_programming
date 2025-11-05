#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog and stores a copy of its name and owner
 * @name: pointer to the dog's name
 * @age: dog's age
 * @owner: pointer to the owner's name
 *
 * Return: pointer to the new dog, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_d;
char *new_name;
char *new_owner;

if (name == NULL || owner == NULL)
return (NULL);

new_d = malloc(sizeof(dog_t));
if (new_d == NULL)
return (NULL);

new_name = malloc(strlen(name) + 1);
if (new_name == NULL)
{
free(new_d);
return (NULL);
}
strcpy(new_name, name);

new_owner = malloc(strlen(owner) + 1);
if (new_owner == NULL)
{
free(new_name);
free(new_d);
return (NULL);
}
strcpy(new_owner, owner);

new_d->name = new_name;
new_d->age = age;
new_d->owner = new_owner;

return (new_d);
}
