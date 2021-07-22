#include "binary_trees.h"

/**
 * binary_tree_balance - count possible balance factor
 * @tree: tree to be search
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_L = 0;
	int height_R = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		height_L = height_max(tree->left);
	if (tree->right != NULL)
		height_R = height_max(tree->right);
	return (height_L - height_R);
}

/**
 * max- max value of a and b
 * @a: first value
 * @b: second value
 *
 * Return: max value between a and b
 */

int max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * height_max - max height
 * @tree: tree to be checked
 *
 * Return: max height of tree
 */

int height_max(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + max(height_max(tree->left),
			height_max(tree->right)));
}
