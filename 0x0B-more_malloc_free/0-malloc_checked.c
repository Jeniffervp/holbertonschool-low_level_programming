#include "holberton.h"
#include <stdlib.h>

/**
 *malloc_checked -should cause normal process termination with a status value.
 * @b: is a number.
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
