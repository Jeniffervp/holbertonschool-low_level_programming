#include "dog.h"

/**
 * init_dog -.
 * @d: pointer to dog.h.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner.
 *
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
