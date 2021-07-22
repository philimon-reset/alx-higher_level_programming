#include "binary_trees.h"

/**
 * binary_tree_is_bst - check if tree is bst
 * @tree: tree to be checked
 *
 * Return: 1 or 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}

/**
 * is_bst - check if tree is bst
 * @tree: tree to be checked
 * @min: min value
 * @max: max value
 *
 * Return: 1 if it is and 0 if not
 */

int is_bst(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	return (is_bst(tree->left, min, tree->n - 1) &&
	is_bst(tree->right, tree->n + 1, max));
}
