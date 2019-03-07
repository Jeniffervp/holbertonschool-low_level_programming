#include "holberton.h"
#include <stdlib.h>

/**
 *argstostr - concatenate all the  strings to new memory space.
 * @ac: is a counter of arguments.
 *
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
