#include "binary_trees.h"
#include <limits.h>

/**
 * bst_recursive - function to do a recursive search
 *
 * @tree: is a pointer to the root node of the tree to rotate
 * @less: the minimum value
 * @great: the maximum value
 * Return: recursion of left side and right side.
 */

int bst_recursive(const binary_tree_t *tree, int less, int great)
{
	if (tree == NULL)
		return (1);
	if (tree->n < less || tree->n > great)
		return (0);
	return (bst_recursive(tree->left, less, tree->n - 1) &&
		bst_recursive(tree->right, tree->n + 1, great));
}

/**
 * binary_tree_is_bst - function that checks if a binary tree is a valid
 * Binary Search Tree
 *
 * @tree: is a pointer to the root node of the tree to check.
 * Return: return 1 if tree is a valid BST, and 0 otherwise
 * If tree is NULL, return 0.
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (bst_recursive(tree, INT_MIN, INT_MAX));
}
