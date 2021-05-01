#include "lists.h"

/**
 *add_dnodeint - add to the begining of the list.
 * @head: head of list.
 * @n: value of new list
 *
 * Return: returns the address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		new_node->next = (*head);
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
