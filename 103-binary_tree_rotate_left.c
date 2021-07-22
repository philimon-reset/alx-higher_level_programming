#include "binary_trees.h"


/**
 * binary_tree_rotate_left - check if tree if complete
 * @tree: tree to be checked
 *
 * Return: 1 or 0
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *right = tree->right, *temp;
	binary_tree_t *P = tree->parent;

	if (tree == NULL)
		return (NULL);
	if (tree->right != NULL)
	{
		temp = right->left;
		right->left = tree;
		tree->right = temp;
		if (right->left != NULL)
			right->left->parent = tree;
		tree->parent = right;
		right->parent = P;
		if (P != NULL)
		{
			if (P->left == tree)
				P->left = right;
			else
				P->right = right;
		}
		return (right);
	}
	return (NULL);
}
