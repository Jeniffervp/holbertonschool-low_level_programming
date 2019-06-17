#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: List of integers to be sorted
 * @size: Lenght of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, minim;
	int temp;

	if (!array)
		return;
	if (size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		minim = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[minim])
			{
				minim = y;
			}
		}
		if (minim != x)
		{
			temp = array[x];
			array[x] = array[minim];
			array[minim] = temp;
			print_array(array, size);
		}
	}
}
