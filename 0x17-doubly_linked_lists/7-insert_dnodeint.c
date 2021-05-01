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
	dlistint_t *temp = get_dnodeint_at_index(*h, idx);
        int noise = 0;

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
