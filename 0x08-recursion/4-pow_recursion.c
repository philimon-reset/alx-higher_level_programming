#include "holberton.h"

/**
 * _pow_recursion - function to print x the power of y
 * @x: base integer
 * @y: superscript or power
 *
 * Return: x the power of y
 */

int _pow_recursion(int x, int y)
{
	int j = 0;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
