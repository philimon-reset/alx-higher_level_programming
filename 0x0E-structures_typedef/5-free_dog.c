#include "dog.h"

/**
 * free_dog - free new struct dog
 * @d: struct
 *
 * Return: void function
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
