#include "binary_trees.h"

/**
 * binary_tree_delete - delete a binary tree node
 * @tree: a pointer to the parent node
 *
 * Return: void function
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL && tree->parent != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			if (tree->parent->left != NULL)
				tree->parent->left = NULL;
			if (tree->parent->right != NULL)
				tree->parent->right = NULL;
			free(tree);
		}
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
}
