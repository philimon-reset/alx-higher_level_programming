#include "holberton.h"

/**
 * checker - find is its prime
 * @i: number to be checked
 * @c: original input
 *
 * Return: 1 if prime 0 if not
 */
int checker(int i, int c)
{
	if (c <= 1)
		return (0);
	else if (c % i == 0)
		return (0);
	else if (i >= c / 2)
		return (1);
	return (checker(i + 1, c));
}

/**
 * is_prime_number - function to if prime
 * @n: integer to be checked
 *
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	return (checker(2, n));
}
