#include "lists.h"

/**
 * free_listint2 - a function that frees linked lists.
 * @head: pointer to a struct
 *
 * Return: void function
 */
void free_listint2(listint_t **head);
{
	listint_t *temp;

	while (temp != NULL)
	{
		temp = *head;
		temp = temp->next;
		free(temp);
	}
	(*head) = NULL;
}
