#include "holberton.h"
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

	if (*str == 0)
		return (0);

	for (lenght = 0; str[lenght]; lenght++)
		copy = malloc(lenght * sizeof(char));
	for (comp = 0; comp < lenght; comp++)
		copy[comp] = str[comp];
	return (copy);
	if (copy == 0)
		return (0);
}
