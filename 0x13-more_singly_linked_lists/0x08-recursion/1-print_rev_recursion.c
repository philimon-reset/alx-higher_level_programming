#include "holberton.h"

/**
 * _print_rev_recursion - function to print string in reverse
 * @s: string to be printed
 *
 * Return: void function
 */

void _print_rev_recursion(char *s)
{
	int j = 0;

	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(s[j]);
	}
}
