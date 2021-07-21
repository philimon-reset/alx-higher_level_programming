#include "binary_trees.h"

/**
 * binary_tree_nodes - count possible nodes of tree
 * @tree: tree to be search
 *
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		nodes = 1;
	if (tree->left != NULL)
	{
		nodes++;
		binary_tree_nodes(tree->left);
	}
	if (tree->right != NULL)
	{
		nodes++;
		binary_tree_nodes(tree->right);
	}
	return (nodes);
}
