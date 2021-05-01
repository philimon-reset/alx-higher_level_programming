#include "lists.h"

/**
 * get_dnodeint_at_index - get the addressof node at given index.
 * @head: head of list.
 * @index: index of needed node.
 *
 * Return: address of indexed node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int size = 0, node = 0;

	size = dlistint_len2(head);
	if (index >= size)
		return (NULL);
	while (temp != NULL)
	{
		if (index == node)
			return (temp);
		node++;
		temp = temp->next;
	}
	return (NULL);
}

/**
 * dlistint_len2 - counts the elements in the list.
 * @h: head of the list.
 *
 * Return: returns the number of nodes.
 */

size_t dlistint_len2(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int nodes = 0;

	while (temp != NULL)
	{
		nodes++;
		temp = temp->next;
	}
	return (nodes);
}
