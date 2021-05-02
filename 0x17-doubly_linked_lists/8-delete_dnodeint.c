#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index.
 * @head: head of list.
 * @index: index to delete.
 *
 * Return: 1 if successs -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = get_dnodeint_at_index2(*head, index);

	if (temp == NULL)
		return (-1);
	if (*head == temp)
	{
		*head = temp->next;
		*head->prev = NULL;
		return (1);
	}
	else
	{
		(temp->prev)->next = temp->next;
		if (temp->next != NULL)
			(temp->next)->prev = temp->prev;
	}
	temp->next = NULL;
	temp->prev = NULL;
	return (1);
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
	dlistint_t *temp2 = head;
	unsigned int size = 0, node = 0;

	while (temp2 != NULL)
	{
		size++;
		temp2 = temp2->next;
	}
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
