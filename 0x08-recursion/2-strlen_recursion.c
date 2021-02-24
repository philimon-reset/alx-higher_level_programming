#include "holberton.h"

/**
 * _strlen_recursion - function to print length of string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
