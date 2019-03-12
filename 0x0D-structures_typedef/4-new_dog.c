#include "dog.h"
#include <stdlib.h>

/**
 *_strdup - duplicate a string to new memory space.
 * @str: the address of memory to duplicate.
 *
 * Return: Nothing.
 */

char *_strdup(char *str)
{
	char *copy;
	int lenght, comp;

	if (str == 0)
		return (0);

	for (lenght = 0; str[lenght]; lenght++)
	{
	}
	copy = malloc(lenght * sizeof(char) + 1);
	if (copy == NULL)
		return (NULL);
	for (comp = 0; comp < lenght; comp++)
		copy[comp] = str[comp];
	copy[comp] = '\0';
	return (copy);
}

/**
 * new_dog - making new dog.
 * @name: pointer to the name of the dog.
 * @age: the age of the dog.
 * @owner:pointer to the name of the owner.
 *
 * Return: Nothing.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = _strdup(name);
	if (new->name == NULL)
		free(new);
	new->age = age;
	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		if (new->name != NULL)
			free(new->name);
		free(new);
	}
	return (new);
}
