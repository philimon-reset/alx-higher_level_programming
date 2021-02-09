#include "holberton.h"

/**
 * _abs - check absolute
 *
 * @n: integer to be checked
 * Return: absolute value of n
 *
 */
int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-n);
	}
}
