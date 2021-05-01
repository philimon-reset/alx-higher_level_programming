#include "lists.h"

/**
 * sum_dlistint - sum of data in list.
 * @head: head of list.
 *
 * Return: total data.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int total = 0;

	while (temp != NULL)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
