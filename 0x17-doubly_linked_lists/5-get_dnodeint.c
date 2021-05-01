#include "lists.h"

/**
 * get_dnodeint - get the addressof node at given index.
 * @head: head of list.
 * @index: index of needed node.
 *
 * Return: address of indexed node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int size = 0, node = 0;

	size = dlistint_len(head);
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
