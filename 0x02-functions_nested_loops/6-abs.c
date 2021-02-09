#include "holberton.h"

/**
 * _abs - check absolute
 *
 * Return: 1 if greater than 0
 * 0 if equal to 0
 * -1 if less than zero
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
