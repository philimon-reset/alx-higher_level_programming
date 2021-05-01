#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at given index.
 * @h: head of list.
 * @idx: index to add in.
 * @n: value to add.
 *
 * Return: address of new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_mode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = get_dnodeint_at_index2(*h, idx);

	if (new_mode == NULL || temp == NULL)
		return (NULL);
	new_mode->n = n;
	new_mode->next = NULL;
	new_mode->prev = NULL;
	if (temp->next != NULL)
	{
		new_mode->next = temp->next;
		(temp->next)->prev = new_mode;
		if (temp->prev != NULL)
		{
			new_mode->prev = temp->prev;
			(temp->prev)->next = new_mode;
		}
	}
	return (new_mode);
}

/**
 * get_dnodeint_at_index2 - get the addressof node at given index.
 * @head: head of list.
 * @index: index of needed node.
 *
 * Return: address of indexed node.
 */

dlistint_t *get_dnodeint_at_index2(dlistint_t *head, unsigned int index)
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
