#include "lists.h"

/**
 * sum_listint - returns the sum of n values
 * @head: pointer to a struct
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int count = 0;

	if (temp == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
