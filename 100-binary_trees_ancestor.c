#include "binary_trees.h"

/**
 * binary_trees_ancestor - calculate the ancestor of the nodes
 * @first: first nodes
 * @second: second nodes
 *
 * Return: common ancestor of both
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *nodes_F;
	binary_tree_t *nodes_S;
	size_t depthf = depth(first);
	size_t depths = depth(second);

	if (depthf < depths)
	{
		second = second->parent;
		depths--;
	}
	if (depthf > depths)
	{
		first = first->parent;
		depthf--;
	}
	if (first == NULL || second == NULL)
		return (NULL);
	if (first->parent == NULL && second->parent == NULL)
		return (NULL);
	if (first->parent == second || first->parent == NULL)
		return (first->parent);
	if (second->parent == NULL || second->parent == first)
		return (second->parent);
	if (first->parent == second->parent)
		return (first->parent);
	nodes_F = binary_trees_ancestor(first->parent, second);
	nodes_S = binary_trees_ancestor(first, second->parent);
	if (nodes_F)
		return (nodes_F);
}

/**
 * depth - depth of the tree
 * @tree: tree to be checked
 *
 * Return: depth of tree
 */

size_t depth(const binary_tree_t *tree)
{
	size_t D = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		D++;
		tree = tree->parent;
	}
	return (D);
}
