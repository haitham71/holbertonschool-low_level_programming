#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 * Return: length of the string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i])
i++;
return (i);
}

/**
 * _strcopy - copies a string from src to dest
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - creates a new dog and copies name and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_d;
int len_name, len_owner;

if (name == NULL || owner == NULL)
return (NULL);

new_d = malloc(sizeof(dog_t));
if (new_d == NULL)
return (NULL);

len_name = _strlen(name);
len_owner = _strlen(owner);

new_d->name = malloc(len_name + 1);
if (new_d->name == NULL)
{
free(new_d);
return (NULL);
}

new_d->owner = malloc(len_owner + 1);
if (new_d->owner == NULL)
{
free(new_d->name);
free(new_d);
return (NULL);
}

_strcopy(new_d->name, name);
_strcopy(new_d->owner, owner);
new_d->age = age;

return (new_d);
}
