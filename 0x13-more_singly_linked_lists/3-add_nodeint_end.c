#include "lists.h"

/**
 * add_node_end - a function that adds node to end of file.
 * @head: pointer to a struct
 * @str: name of new node
 *
 * Return: struct
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(list_t));
	listint_t *last = *head;

	if (temp == NULL)
		return (NULL);
	temp->len = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = temp;
	}
	return (temp);
}
