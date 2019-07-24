#include "binary_trees.h"
#include <limits.h>

/**
 * array_to_bst - function that inserts a value in a Binary Search Tree
 *
 * @array: pointer to the first element of the array to be converted
 * @size: number of element in the array
 * Return: a pointer to the newest node to be insert, NULL if fail
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i = 0;

	if (!size)
		return (root);
	while (i < size)
	{
		(bst_insert(&root, array[i]));
		i++;
	}
	return (root);
}
