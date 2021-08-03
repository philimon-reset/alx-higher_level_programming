#include "lists.h"

/**
 * is_palindrome - check if the linked list is a palindrome
 * @head: list to be checked
 *
 * Return: 0 if it isnt and 1 if it is
 */
int is_palindrome(listint_t **head)
{
        listint_t *temp = *head;
        int size = check_size(temp), i = 0;
        int array_hold[size];

        if (size == 0)
                return 0;
        temp = *head;
        while (temp != NULL) {
                array_hold[i] = temp->n;
                i++;
                temp = temp->next;
        }
        return (array_hold[0]);
}

/**
 * check_size - return size of list
 * @head: list to be checked
 *
 * Return: size of list
 */

int check_size(listint_t *head) {
        int i = 0;

        while (head != NULL) {
                i++;
                head = head->next;
        }
        return (i);
}