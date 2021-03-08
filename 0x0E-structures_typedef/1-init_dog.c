#include "holberton.h"
#include "dog.h"

/**
 * init_dog - initalize struct dog
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: void function
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if ((*d) != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
