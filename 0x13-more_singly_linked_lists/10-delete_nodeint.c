#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index of a linked list
 * @head: pointer to a struct
 * @index: index given
 *
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (index > list_len(*head) || list_len(*head) == 0)
	{
		return (-1);
	}
	while (head != NULL)
	{
		temp = *head;
		if (i == index)
		{
			if (i == 0)
			{
				*head = temp->next;
				free(temp);
				return (1);
			}
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		if ((i + 1) == index)
			prev = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}

/**
 * list_len - a function that prints number of nodes.
 * @h: value of list
 *
 * Return: any data type list
 */
size_t list_len(const listint_t *h)
{
	const listint_t *temp = h;
	unsigned int node = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		node++;
	}
	return (node);
}
