#include "binary_trees.h"

/**
 * binary_tree_inorder - search through the tree in inorder
 * @tree: tree to be search
 * @func: function to print node values
 *
 * Return: void funcion
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left != NULL)
			binary_tree_inorder(tree->left, func);
		if (tree != NULL)
			func(tree->n);
		if (tree->right != NULL)
			binary_tree_inorder(tree->right, func);
	}
}
