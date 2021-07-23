#include "binary_trees.h"


/**
 * binary_tree_rotate_right - check if tree if complete
 * @tree: tree to be checked
 *
 * Return: 1 or 0
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *left, *temp;
	binary_tree_t *P;

	if (tree == NULL)
		return (NULL);
	if (tree->left != NULL)
	{
		left = tree->left;
		temp = left->right;
		left->right = tree;
		tree->left = temp;
		if (temp != NULL)
			temp->parent = tree;
		P = tree->parent;
		tree->parent = left;
		left->parent = P;
		if (P != NULL)
		{
			if (P->left == tree)
				P->left = left;
			else
				P->right = left;
		}
		return (left);
	}
	return (NULL);
}
