#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle of node
 * @node: node to be checked
 *
 * Return: uncle of node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	return (sibling(node->parent));
}

/**
 * sibling - check if there siblings
 * @node: node to be search
 *
 * Return: sibling of node
 */

binary_tree_t *sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
