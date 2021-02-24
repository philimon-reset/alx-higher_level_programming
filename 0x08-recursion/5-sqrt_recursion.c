#include "holberton.h"

/**
 * square_root - find square root to the nearest round
 * @i: number to be checked
 * @c: original input
 *
 * Return: sqaure root
 */
int square_root(int i, int c)
{
	if (c < 0)
		return (-1);
	else if (i * i == c)
		return (i);
	else if (i * i > c)
		return (-1);
	return (square_root(i + 1, c));
}

/**
 * _sqrt_recursion - function to print square root of n
 * @n: integer to be checked
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (square_root(0, n));
}
