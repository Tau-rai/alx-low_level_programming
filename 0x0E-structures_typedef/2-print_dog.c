#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints out a struct to stdout
 * @d: pointer to a struct
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else if (d->age == 0)
		printf("Age: (nil)\n");
	else if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
