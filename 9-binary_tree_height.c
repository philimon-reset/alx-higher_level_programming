#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: tree to be measured
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t H = 0;

	if (tree == NULL)
		return (0);
	H = height(tree, H);
	return (H);
}

/**
 * height - copy of height function due to prototype limits
 * @tree: tree to be checked
 * @H: height of tree
 *
 * Return: height of tree
 */
size_t height(const binary_tree_t *tree, size_t H)
{
	if (tree->left == NULL && tree->right == NULL)
		return (H);
	if (tree->left != NULL)
	{
		H++;
		height(tree->left, H);
	}
	if (tree->right != NULL)
	{
		H++;
		height(tree->right, H);
	}
	return (H);
}
