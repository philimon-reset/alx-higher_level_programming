#include "lists.h"

/**
 * free_list - a function that frees linked lists.
 * @head: pointer to a struct
 *
 * Return: void function
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		free(head);
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
