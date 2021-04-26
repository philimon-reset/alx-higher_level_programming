#include "lists.h"
/**
 * check_cycle - check if loop exists in cycle
 * @list: struct to be checked
 *
 * Return: 1 if it is, 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *turtle = malloc(sizeof(listint_t));
	listint_t *hare = malloc(sizeof(listint_t));
	listint_t *temp = list;

	if (turtle == NULL || hare == NULL)
		return (0);
	turtle->n = temp->n;
	hare->n = temp->n;
	while (temp != NULL)
	{
		turtle->next = temp->next;
		hare->next = (temp->next)->next;
		if (turtle == hare)
		{
			free_listint(turtle);
			free_listint(hare);
			return (1);
		}
		temp = temp->next;
	}
	free_listint(turtle);
	free_listint(hare);
	return (0);
}
