#include "binary_trees.h"


/**
 * binary_tree_rotate_left - check if tree if complete
 * @tree: tree to be checked
 *
 * Return: 1 or 0
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *right, *temp;
	binary_tree_t *P;

	if (tree == NULL)
		return (NULL);
	if (tree->right != NULL)
	{
		right = tree->right;
		temp = right->left;
		right->left = tree;
		tree->right = temp;
		if (temp != NULL)
			temp->parent = tree;
		P = tree->parent;
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
