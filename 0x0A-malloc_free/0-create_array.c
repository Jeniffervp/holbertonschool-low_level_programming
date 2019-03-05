#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - create an array using malloc to reserve a space.
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	if (size == 0)
		return (0);

	x = malloc(sizeof(char) * size);

	if (x == '\0')
		return (0);

	for (y = 0; y < size; y++)
		x[y] = c;
	return (x);
}
