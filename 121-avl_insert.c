#include "binary_trees.h"

/**
 * bst_is - check if tree is bst
 * @tree: tree to be checked
 * @min: min value
 * @max: max value
 *
 * Return: 1 if it is and 0 if not
 */

int bst_is(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	if (balance(tree) <= 1 && balance(tree) >= -1)
	{
		return (bst_is(tree->left, min, tree->n - 1) &&
		bst_is(tree->right, tree->n + 1, max));
	}
	return (0);
}

/**
 * avl_insert - insert node to make avl
 * @tree: tree to be checked
 * @value: value to be inserted
 *
 * Return: tree after insertion
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	if (tree == NULL)
		return (0);
	return (bst_is(tree, INT_MIN, INT_MAX));
}
