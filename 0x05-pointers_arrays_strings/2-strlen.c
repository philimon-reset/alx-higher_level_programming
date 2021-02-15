#include "holberton.h"

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int var;
	int output;

	for (var = 0; s != '\0'; var++)
	{
		output += 1;
	}
	return (output);
}
