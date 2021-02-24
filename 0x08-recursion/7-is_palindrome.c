#include "holberton.h"

/**
 * _puts_recursion - function to print string
 * @s: string to be printed
 *
 * Return: void function
 */

void _puts_recursion(char *s)
{
	int j = 0;

	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[j]);
		_puts_recursion(s + 1);
	}
}

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

/**
 * is_palindrome - function to check if its palindrome
 * @s: string to be checked
 *
 * Return: 1 if a string is palyndrome 
 */

int is_palindrome(char *s)
{
	if (_print_rev_recursion(*s) == _puts_recursion(*s))
		return (1);
	else
		return (0);
}
