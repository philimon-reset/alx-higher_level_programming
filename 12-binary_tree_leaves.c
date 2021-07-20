#include "binary_trees.h"

/**
 * binary_tree_leaves - count leaves of tree
 * @tree: tree to be checked
 *
 * Return: leaves of tree
 */
 
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	binary_tree_t *node = tree;

	while(1)
	{
	if (node->left != NULL)
		node = node->left;
	else if (node->right != NULL)
		node = node->right;
	else
		break;
	}
}
