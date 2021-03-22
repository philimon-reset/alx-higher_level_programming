#include "dog.h"

/**
 * print_dog - print struct dog
 * @d: pointer to struct dog
 *
 * Return: void function
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
		{
			(*d).name = "(nil)";
		}
		if ((*d).owner == NULL)
		{
			(*d).owner = "(nil)";
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}
