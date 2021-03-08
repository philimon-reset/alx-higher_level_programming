#include "dog.h"

/**
 * print_dog - print struct dog
 * @d: pointer to struct dog
 *
 * Return: void function
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a = _strlen(name), b = _strlen(owner);
	char *cpy_name, *cpy_owner;
	struct dog *temp;

	cpy_name = malloc(sizeof(char *) * (a + 1));
	cpy_owner = malloc(sizeof(char *) * (b + 1));
	temp = malloc(sizeof(struct *));
	if ((*cpy_name != NULL) && (*cpy_owner != NULL))
	{
		(*temp).name = name;
		(*temp).age = age;
		(*temp).owner = owner;
	}
	else
	{
		free(cpy_name);
		free(cpy_owner);
		free(temp);
		return (NULL);
	}
	return (temp);
}

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int var;
	int output = 0;

	for (var = 0; s[var] != '\0'; var++)
	{
		output += 1;
	}
	return (output);
}
