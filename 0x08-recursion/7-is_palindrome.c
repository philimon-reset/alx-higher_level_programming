#include "holberton.h"

/**
 * _puts_recursion - function to print string
 * @s: string to be printed
 *
 * Return: void function
 */

void start(char *s, int a, int b, int *flag)
{
	if (a <= b)
	{
		if (s[a] == s[b])
			*flag *= 1;
		else
			*flag *= 0;
		start(s, a + 1, b - 1, flag)
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
 * Return: 1 if a string is palyndrome 
 */

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}
