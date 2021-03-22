#include "lists.h"

/**
 * listint_len - a function that prints number of nodes.
 * @h: value of list
 *
 * Return: any data type list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int node = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		node++;
	}
	return (node);
}
