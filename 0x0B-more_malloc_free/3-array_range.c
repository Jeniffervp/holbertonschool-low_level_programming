#include "holberton.h"
#include <stdlib.h>

/**
 *array_range -concatenate two strings.
 * @min: the min value.
 * @max: the max value.
 *
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int *a, b;

	if (min > max)
		return (0);
	a = malloc(sizeof(unsigned int) * (max - min + 1));
	if (a == 0)
	{
		free(a);
		return (0);
	}
	for (b = min; b <= max; b++)
		a[b] = b;
	return (a);
}
