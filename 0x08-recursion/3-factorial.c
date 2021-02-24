#include "holberton.h"

/**
 * factorial - function to print factorial of n
 * @n: integer to be checked
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
