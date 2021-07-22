#include "binary_trees.h"


/**binary_tree_is_rotate_right - check if tree if complete
 * @tree: tree to be checked
 *
 * Return: 1 or 0
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp = tree->left;

	if (tree == NULL)
		return (NULL);
	if (tree->left != NULL)
	{
		tree->left = temp->right;
		if (temp->right != NULL)
			temp->right->parent = tree;
		temp->right = tree;
		tree->parent = temp;
		temp->parent = tree->parent;
	return (tree);
	}
	return (NULL);
}
