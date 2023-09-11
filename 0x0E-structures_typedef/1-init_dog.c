#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initializes a struct
 * @d: pointer to a dog struct
 * @name: pointer to a dog name
 * @age: pointer to its age
 * @owner: pointer to owner
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
