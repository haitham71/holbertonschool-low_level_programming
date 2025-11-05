#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure representing information about a dog
 * @name: pointer to the dog's name
 * @age: dog's age
 * @owner: pointer to the dog's owner name
 *
 * Description: This structure stores information about a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

#endif
