#include "lists.h"

/**
 * pop_listint - deletes the head node and returns node’s data n
 * @head: pointer to a struct
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (*head == NULL)
		return (0);
	temp = (*head);
	a = temp->n;
	free(temp);
	(*head) = (*head)->next;
	return (a);
}
