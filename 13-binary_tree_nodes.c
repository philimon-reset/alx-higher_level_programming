#include "binary_trees.h"

/**
 * binary_tree_nodes - count possible nodes of tree
 * @tree: tree to be search
 *
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodesL = 0;
	size_t nodesR = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left != NULL)
		nodesL = binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		nodesR = binary_tree_nodes(tree->right);
	return (nodesL + nodesR + 1);
}
