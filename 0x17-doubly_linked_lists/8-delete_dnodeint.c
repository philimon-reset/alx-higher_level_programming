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
	dlistint_t *temp = *head;
	unsigned int size = 0, node = 0;

	if (head == NULL)
		return (-1);
	for (size = 0; temp != NULL; size++)
		temp = temp->next;
	if (index >= size || size == 0)
		return (-1);
	temp = *head;
	for (; node != index; node++, temp = temp->next)
	{
		;
	}
	if (*head == temp)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	(temp->prev)->next = temp->next;
	if (temp->next != NULL)
		(temp->next)->prev = temp->prev;
	free(temp);
	return (1);
}
