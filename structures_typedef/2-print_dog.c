#include <stdio.h>
#include "dog.h"
/**
 * print_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to set
 * @age: age to set
 * @owner: owner to set
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d -> name);

printf("Age: %f\n", d -> age);

if (d->owner == NULL)
printf("Owner: (nil)\n");

printf("Owner: %s\n", d -> owner);

}
