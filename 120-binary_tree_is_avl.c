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
		height_L = height_BST(tree->left);
	if (tree->right != NULL)
		height_R = height_BST(tree->right);
	return (height_L - height_R);
}

/**
 * height_BST - max height
 * @tree: tree to be checked
 *
 * Return: max height of tree
 */

int height_BST(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + MAX(height_BST(tree->left),
			height_BST(tree->right)));
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
	if (balance(tree) <= 1 && balance(tree) >= -1)
	{
		return (bst_is(tree->left, min, tree->n - 1) &&
		bst_is(tree->right, tree->n + 1, max));
	}
	return (0);
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
		return (0);
	return (bst_is(tree, INT_MIN, INT_MAX));
}
