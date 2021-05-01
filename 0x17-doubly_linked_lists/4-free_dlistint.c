#include "lists.h"

/**
 * free_dlistint - free all allocated memory.
 * @head: head of linked list.
 *
 * Return: void function.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
