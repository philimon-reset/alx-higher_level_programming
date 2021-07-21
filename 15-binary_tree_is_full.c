#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: to be checked
 *
 * Return: 1 if it is and 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int node_L = 0, node_R = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		if (tree->parent != NULL)
			return (1);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	node_L = binary_tree_is_full(tree->left);
	node_R = binary_tree_is_full(tree->right);
	if (node_L == node_R)
		return (1);
	return (0);
}
