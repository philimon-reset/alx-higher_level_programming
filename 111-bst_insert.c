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
	if (tree != NULL)
	{
		if (*tree == NULL)
		{
			(*tree) = binary_tree_node(*tree, value);
			return (*tree);
		}
		if (value == (*tree)->n)
			return (NULL);
		if (value < (*tree)->n)
		{
			if ((*tree)->left == NULL)
			{
				(*tree)->left = binary_tree_node(*tree, value);
				return ((*tree)->left);
			}
			else
				return (bst_insert(&((*tree)->left), value));
		}
		else
		{
			if ((*tree)->right == NULL)
			{
				(*tree)->right = binary_tree_node(*tree, value);
				return ((*tree)->right);
			}
			else
				return (bst_insert(&((*tree)->right), value));
		}
	}
	return (NULL);
}
