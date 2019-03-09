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
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == 0)
		return (0);
	for (b = 0; b <= max - min; b++)
		a[b] = min + b;
	return (a);
}
