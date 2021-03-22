#include "lists.h"

/**
 * pop_listint - deletes the head node and returns node’s data n
 * @head: pointer to a struct
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = malloc(sizeof(list_t));
	listint_t *del = *head;

	if (*head == NULL)
		return (0);
	else
	{
		(*head) = (*head)->next;
		free(*head);
		return (del->n);
	}
}
