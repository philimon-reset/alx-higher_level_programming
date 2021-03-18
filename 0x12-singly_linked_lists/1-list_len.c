#include "lists.h"

/**
 * list_len - a function that prints number of nodes.
 * @h: value of list
 *
 * Return: any data type list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int node = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		node++;
	}
	return (node);
}
