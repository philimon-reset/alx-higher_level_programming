#include "holberton.h"

/**
 * _atoi -  a function that convert a string to an integer
 * @s: string to be converted
 *
 * Return: 0
 */

int _atoi(char *s)
{
	int var = 1;
	unsigned int output = 0;

	do {
		if (*s == '-')
			var *= -1;
		else if (*s >= '0' && *s <= '9')
			output = (output * 10) + (*s - '0');
		else if (output > 0)
			break;
	} while (*s++);
	return (output * var);
}
