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
	char *x;
	int y;

	if (*str == 0)
		return (0);

	for (y = 0; str[y]; y++)
		x = malloc(y * sizeof(char) + 1);
	for (y = 0; str[y]; y++)
		x[y] = str[y];
	return (x);
	if (str > x)
		return (0);
}
