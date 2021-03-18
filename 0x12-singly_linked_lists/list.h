#ifndef LIST_H
#define LIST_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

typedef struct node *nodeptr;

/**
 * struct node - a struct to hold value and address of list
 *
 * @value: value of list
 * @next: address of next list
 */
typedef struct map_t
{
	char value;
	nodeptr next;
} node;

int _putchar(char c);

#endif /*LIST_H*/
