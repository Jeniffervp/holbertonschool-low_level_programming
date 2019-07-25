#include "binary_trees.h"
#include <limits.h>
/**
 * minor_val - Search for the minus value in a tree
 *
 * @root: pointer to the root node of the tree where you will remove a node
 * Return: minor value found
 */
bst_t *minor_val(bst_t *root)
{
	if (root == NULL)
		return (NULL);
	else if (root->left != NULL)
		return (minor_val(root->left));
	return (root);
}

/**
 * bst_remove - function that searches for a value in a Binary Search Tree
 *
 * @root: pointer to the root node of the tree where you will remove a node
 * @value: value to remove in the tree
 * Return: pointer to the new root node of the tree after removing
 * the desired value
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp;

	if (root == NULL)
		return (NULL);
	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (root->left == NULL && root->right == NULL)
		{
			free(root);
			return (NULL);
		}
		else if (root->left == NULL || root->right == NULL)
		{
			if (root->left == NULL)
			{
				temp = root->right;
				temp->parent = root->parent;
			}
			else
			{
				temp = root->left;
				temp->parent = root->parent;
			}
			free(root);
			return (temp);
		}
		else
		{
			temp = minor_val(root->right);
			root->n = temp->n;
			root->right = bst_remove(root->right, temp->n);
		}
	}
	return (root);
}
