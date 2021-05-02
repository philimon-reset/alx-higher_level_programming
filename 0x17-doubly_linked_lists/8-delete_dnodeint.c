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
	dlistint_t *temp = *head, *temp2 = *head;
	unsigned int size = 0, node = 0;

	while (temp2 != NULL)
	{
		size++;
		temp2 = temp2->next;
	}
	if (index >= size)
		return (-1);
	while (temp != NULL)
	{
		if (index == node)
			break;
		node++;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	if (*head == temp)
	{
		*head = temp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
			return (1);
		}
	}
	else
	{
		(temp->prev)->next = temp->next;
		if (temp->next != NULL)
			(temp->next)->prev = temp->prev;
	}
	temp->next = NULL;
	temp->prev = NULL;
	free(temp);
	return (1);
}
