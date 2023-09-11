#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog struct
 * @name:first member
 * @age: second member
 * @owner: third member
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(struct dog));
	if (new_d == NULL)
		return (NULL);
	
	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;

	return (new_d);
}
