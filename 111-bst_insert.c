#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: tree to be inserted
 * @value: value to be inserted
 *
 * Return: tree inserted
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new = *tree;

	if (tree != NULL)
	{
		if (new == NULL)
		{
			new = binary_tree_node(*tree, value);
			if (new == NULL)
				return (NULL);
			return (new);
		}
		if (value == new->n)
			return (NULL);
		if (value < new->n)
			return bst_insert(&(new->left), value);
		else
			return bst_insert(&(new->right), value);
	}
	return (NULL);
}
