#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to a struct
 *
 * Return: struct needed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (temp != NULL)
	{
		next = temp->next;
		temp->next = prev;
		prev = temp;
	}
	*head = prev;
	return (next);
}
