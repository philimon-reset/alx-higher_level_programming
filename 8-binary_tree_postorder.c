#include "binary_trees.h"

/**
 * binary_tree_postorder - search through the tree in postorder
 * @tree: tree to be search
 * @func: function to print node values
 *
 * Return: void funcion
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left != NULL)
			binary_tree_postorder(tree->left, func);
		if (tree->right != NULL)
			binary_tree_postorder(tree->right, func);
		if (tree != NULL)
			func(tree->n);
	}
}
