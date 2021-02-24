#include "holberton.h"

/**
 * start - function to check if the first and last letters match
 * @a: start index of string
 * @b: end index of string
 * @s: string to be checked
 * @flag: value holder for checker
 *
 * Return: void function
 */

void start(char *s, int a, int b, int *flag)
{
	if (a < b + 1)
	{
		if (s[a] != s[b])
			*flag *= 0;
		else
			*flag *= 1;
		start(s, a + 1, b - 1, flag);
	}
}


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


/**
 * is_palindrome - function to check if its palindrome
 * @s: string to be checked
 *
 * Return: flag
 */

int is_palindrome(char *s)
{
	int flag = 1;

	if (_strlen_recursion(s) == 0)
		return (flag);
	start(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}
