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
 * _sqrt_recursion - function to if prime
 * @n: integer to be checked
 *
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	return (checker(2, n));
}
