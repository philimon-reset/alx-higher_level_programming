#include "lists.h"

/**
 * print_dlistint - print all the elements in the list.
 * @h: head of the list.
 *
 * Return: returns the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int nodes = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		nodes++;
		temp = temp->next;
	}
	return (nodes);
}
