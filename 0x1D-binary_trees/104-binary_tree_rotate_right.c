#include "binary_trees.h"

/**
 * binary_tree_rotate_right - function that performs a right-rotation
 * on a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to rotate
 * Return:  pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp, *aux;

	if (tree == NULL || tree->left == NULL)
		return (NULL);
	aux = tree->parent;
	temp = tree->left;
	tree->left = temp->right;
	if (temp->right != NULL)
		temp->right->parent = tree;
	temp->right = tree;
	tree->parent = temp;
	temp->parent = aux;
	return (temp);
}
