#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints out a struct to stdout
 * @d: pointer to a struct
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	char *name = d->name;
	float age = d->age;
	char *owner = d->owner;

	if (d == NULL)
		return;

	if (name == NULL)
		printf("Name: (nil)");
	else if (age == 0)
		printf("Age: (nil)");
	else if (owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}
