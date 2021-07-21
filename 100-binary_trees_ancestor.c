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

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *) first);
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
	return (nodes_S);
}
