#include "binary_trees.h"

/**
 * bst_search - search node of tree
 * @tree: tree to be search
 * @value: value to be searched
 *
 * Return: node of value searched
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = NULL;

	if (tree != NULL)
	{
		if (value == (tree)->n)
			node = (bst_t *)tree;
		else if (value < (tree)->n)
			node = bst_search(((tree)->left), value);
		else
			node = bst_search(((tree)->right), value);
		if (node == NULL)
			return (NULL);
		return (node);
	}
	return (NULL);
}
