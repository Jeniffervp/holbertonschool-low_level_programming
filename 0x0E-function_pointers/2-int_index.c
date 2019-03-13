#include "function_pointers.h"

/**
 * int_index - is a function of an array.
 *@array: is the array.
 *@size: is the number of elements in the array.
 *@cmp: the comparation function.
 *
 * Return: something.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if ((array == NULL) || (size <= 0) || (cmp == NULL))
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (0);
}
