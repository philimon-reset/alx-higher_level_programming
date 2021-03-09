#include "dog.h"

/**
 * new_dog - print new struct dog
 * @name: name
 * @age: age
 * @owner: owner of dog
 *
 * Return: void function
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a = _strlen(name), b = _strlen(owner);
	char *cpy_name;
	char *cpy_owner;
	dog_t *temp;

	cpy_name = malloc(sizeof(char *) * (a + 1));
	cpy_owner = malloc(sizeof(char *) * (b + 1));
	temp = malloc(sizeof(struct dog));
	if ((cpy_name) && (cpy_owner) && (temp))
	{
		_strcpy(cpy_name, name);
		_strcpy(cpy_owner, owner);
		(*temp).name = cpy_name;
		(*temp).age = age;
		(*temp).owner = cpy_owner;
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

/**
 * _strcpy - copy string
 * @dest: destanation
 * @src: source of string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int var = 0;

	for (var = 0; *(src + var) != '\0'; var++)
	{
		*(dest + var) = *(src + var);
	}
	*(dest + var) = '\0';
	return (dest);
	_putchar('\n');
}
