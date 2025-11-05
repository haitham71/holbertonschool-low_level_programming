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
{}

if (d -> name == NULL)
{
printf("name: (nil)");
}


printf("name: %s \n", d -> name);
printf("age: %f \n", d -> age);
printf("owner: %s \n", d -> owner);

}
