#include "holberton.h"

/**
 * _isdigit - check if didigt
 *
 * @c: charcter checked if its digit
 * Return: 1 if its digit
 * 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
