#include "lists.h"

/**
 * dlistint_len - counts the elements in the list.
 * @h: head of the list.
 *
 * Return: returns the number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
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
