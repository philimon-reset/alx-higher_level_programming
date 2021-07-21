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
	binary_tree_t *nodes;

	if (first->parent == second || second->parent == NULL)
		return (first->parent);
	if (second->parent == first || first->parent == NULL)
		return (second->parent);
	if (first->parent == second->parent)
		return (first->parent);
	nodes = binary_trees_ancestor(first->parent, second->parent);
	return (nodes);
}
