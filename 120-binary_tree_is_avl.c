#include "binary_trees.h"

/**
 * balance - count possible balance factor
 * @tree: tree to be search
 *
 * Return: balance factor
 */

int balance(const binary_tree_t *tree)
{
	int height_L = 0;
	int height_R = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		height_L = height(tree->left);
	if (tree->right != NULL)
		height_R = height(tree->right);
	return (height_L - height_R);
}

/**
 * height - max height
 * @tree: tree to be checked
 *
 * Return: max height of tree
 */

int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + max(height(tree->left),
			height(tree->right)));
}

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
	return (bst_is(tree->left, min, tree->n - 1) &&
	bst_is(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_avl - check if the tree if height balanced
 * @tree: tree to be checked
 *
 * Return: 1 or 0
 */

int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (binary_tree_balance(tree) <= 1 && binary_tree_balance(tree) >= -1)
	{
		if (is_bst(tree, INT_MIN, INT_MAX) == 0)
			return (0);
		return (binary_tree_is_avl(tree->left) &&
			binary_tree_is_avl(tree->right));
	}
	return (0);
}
