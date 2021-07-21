#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: tree to be measured
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + max(height_max(tree->left), height_max(tree->right)));
}
