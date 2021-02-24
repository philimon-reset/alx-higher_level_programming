B#include "holberton.h"

/**
 * factorial - function to print factorial of n
 * @n: integer to be checked
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	int j = 0;

	if (n < 0)
		return (-1);
	if (n == '0')
		return (1);
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
