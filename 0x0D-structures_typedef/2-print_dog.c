#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the struct.
 * @d: pointer to dog.h.
 *
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d == 0)
	{
	}
	if (d->name == 0)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == 0)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);

}
