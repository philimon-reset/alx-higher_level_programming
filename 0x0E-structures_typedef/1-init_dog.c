#include "dog.h"

/**
 * init_dog - initalize struct dog
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner of dog
 *
 * Return: void function
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
