#include "binary_trees.h"

/** binary_tree_preorder - search through the tree in preorder
 * @tree: tree to be search
 * @func: function to print node values
 *
 * Return: void funcion
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		func(tree->n);
		return;
	}
	else
	{
		if (tree != NULL)
		{
	    		func(tree->n);
		}
	if (tree->left != NULL)
	{
		binary_tree_preorder(tree->left, func);
	}
	if (tree->right != NULL)
	{
		binary_tree_preorder(tree->right, func);
	}
	}
}
