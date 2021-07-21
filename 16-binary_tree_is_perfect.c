#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if the tree is perfect
 * @tree: tree to be checked
 *
 * Return: 1 if it is and 0 if it isnt
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (height_max(tree->left) == height_max(tree->right))
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}
	return (0);
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
	if (a >= b)
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
	return (1 + max(height_max(tree->left), height_max(tree->right)));
}
