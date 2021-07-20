#include "binary_trees.h"

/**
 * binary_tree_depth - depth of the tree
 * @tree: tree to be checked
 *
 * Return: depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t D = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		D++;
		tree = tree->parent;
	}
	return (D);
}
