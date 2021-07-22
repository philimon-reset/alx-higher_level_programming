#include "binary_trees.h"


/**
 * binary_tree_rotate_right - check if tree if complete
 * @tree: tree to be checked
 *
 * Return: 1 or 0
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *B = tree->left;
	binary_tree_t *P = tree->parent;

	if (tree == NULL)
		return (NULL);
	if (tree->left != NULL)
	{
		tree->left = B->right;
		if (B->right != NULL)
			B->right->parent = tree;
		B->right = tree;
		tree->parent = B;
		B->parent = P;
		if (P != NULL)
		{
			if (P->left == tree)
				P->left = B;
			else
				P->right = B;
		}
		return (B);
	}
	return (NULL);
}
