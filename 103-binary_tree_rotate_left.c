#include "binary_trees.h"


/**
 * binary_tree_rotate_left - check if tree if complete
 * @tree: tree to be checked
 *
 * Return: 1 or 0
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *right = tree->right;

	if (tree == NULL)
		return (NULL);
	if (tree->right != NULL)
	{
		tree->right = right->left;
		if (right->left != NULL)
			right->left->parent = tree;
		right->left = tree;
		tree->parent = right;
		right->parent = tree->parent;
		tree = right;
		return (tree);
	}
	return (NULL);
}
