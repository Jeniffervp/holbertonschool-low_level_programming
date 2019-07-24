#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function that performs a left-rotation
 * on a binary tree
 *
 * @tree: is a pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp, *aux;

	if (tree == NULL || tree->right == NULL)
		return (NULL);
	aux = tree->parent;
	temp = tree->right;
	tree->right = temp->left;
	if (temp->left != NULL)
		temp->left->parent = tree;
	temp->left = tree;
	tree->parent = temp;
	temp->parent = aux;
	return (temp);
}
