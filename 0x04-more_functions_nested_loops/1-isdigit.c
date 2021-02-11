#include "holberton.h"

/**
 * _isdigit - prints if its digit
 *
 * @c: charcter checked if its digit
 * Return: 1 if its digit
 * 0 if not
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
