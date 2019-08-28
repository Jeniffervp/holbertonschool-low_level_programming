#include "search_algos.h"

/**
 * binary_search - function to search
 * @array: pointer to the first position of the array
 * @size: number of element in the array
 * @value: value to seach for
 *
 * Return: -1 if not array or value and variable if success
 */

int binary_search(int *array, size_t size, int value)
{
	size_t first = 0, mid = 0, last = 0, a;

	if (!array || !size)
		return (-1);

	last = size - 1;

	while (first <= last)
	{
		printf("Searching in array: ");
		for (a = first; a < last; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[last]);
		mid = (first + last) / 2;

		if (array[mid] < value)
		{
			first = mid + 1;
		}
		else if (array[mid] > value)
		{
			last = mid - 1;
		}
		else
			return (mid);
	}

	return (-1);

}
