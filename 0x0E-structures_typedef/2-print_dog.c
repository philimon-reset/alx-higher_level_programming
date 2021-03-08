#include "holberton.h"

/**
 * print_dog - print struct dog
 * @struct dog *d: pointer to struct dog
 *
 * Return: void function
 */

void print_dog(struct dog *d)
{
	if ((*d).name = NULL)
		(*d).name = "(nil)";
	if ((*d).owner = NULL)
		(*d).owner = "(nil)";
	printf("Name: %s\nAge: %lf\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
