#include "search_algos.h"

/**
 * linear_search - function to search
 * @array: pointer to the first position of the array
 * @size: number of element in the array
 * @value: value to seach for
 *
 * Return: -1 if not array or value and variable if success
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (!array)
		return (-1);

	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);
		}
	}

	return (-1);

}
