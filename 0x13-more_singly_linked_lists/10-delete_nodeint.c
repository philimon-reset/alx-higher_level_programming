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
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *c;
	listint_t *prev;
	unsigned int i = 0;

	if (temp == NULL)
		return (NULL);
	prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if (head != NULL)
	{
		if (index > list_len(*head))
		{
			free(temp);
			return (-1);
		}
		for (c = (*head); (c != NULL); c = c->next)
		{
			if ((i + 1) == index)
			{
				prev = c;
			}
			if ((i - 1) == index)
			{
				temp->next = c;
				if (prev != NULL)
				{
					prev->next = temp;
				}
				else
				{
					(*head) = temp;
				}
				return (1);
			}
			i++;
		}
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
