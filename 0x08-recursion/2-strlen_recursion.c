#include "holberton.h"

/**
 * _strlen_recursion - function to print length of string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	int j = 0, output = 1;

	if (s[j] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
		_putchar('\n');
	}
	return (0);
}
