#include "lists.h"

/**
 * free_listint - a function that frees linked lists.
 * @head: pointer to a struct
 *
 * Return: void function
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
