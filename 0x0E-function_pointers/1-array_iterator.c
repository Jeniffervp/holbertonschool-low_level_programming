#include "function_pointers.h"

/**
 * array_iterator - is a function of an array.
 *@array: the numbers.
 *@size: a size.
 *@action: the function.
 *
 * Return: Always 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if ((array == 0) || (size == 0) || (action == 0))
		return;
	for (a = 0; a < size; a++)
		action(array[a]);

}
