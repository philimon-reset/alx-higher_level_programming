#include "binary_trees.h"


/**
 * binary_tree_rotate_right - check if tree if complete
 * @tree: tree to be checked
 *
 * Return: 1 or 0
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *left = tree->left;
	binary_tree_t *temp = tree->parent;

	if (tree == NULL)
		return (NULL);
	if (tree->left != NULL)
	{
		tree->left = left->right;
		if (left->right != NULL)
			left->right->parent = tree;
		left->right = tree;
		tree->parent = left;
		left->parent = tree->parent;
		tree = left;
		if (temp != NULL)
		{
			if (temp->left == tree)
				temp->left = left;
			else
				temp->right = left;
		}
		return (left);
	}
	return (NULL);
}
