#include "binary_trees.h"


/**
 * binary_tree_rotate_right - check if tree if complete
 * @tree: tree to be checked
 *
 * Return: 1 or 0
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *left = tree->left, *right = tree->right;

	if (tree == NULL)
		return (NULL);
	if (tree->left != NULL)
	{
		temp = tree;
		tree->left = left->right;
		tree->right = temp;
		if (left->right != NULL)
			left->right->parent = tree;
		left->right = tree;
		tree->parent = left;
		left->parent = temp->parent;
		tree = left;
		return (left);
	}
	return (NULL);
}
