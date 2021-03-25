#include "holberton.h"

/**
 * binary_to_uint - function to turn bin to uint
 * @b: character
 *
 * Return: unsigned int of char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int base;
	int i, j = 0;

	base = 1;
	if (_strlen(b) == 0)
		return (0);
	while (*b)
	{
		if ((*b != '0' && *b != '1') || b == NULL)
			return (0);
		b++;
	}
	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			n += base;
		}
		base *= 2;
	}
	return (n);
}

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

unsigned int _strlen(const char *s)
{
	int var;
	int output = 0;

	for (var = 0; s[var] != '\0'; var++)
	{
		output += 1;
	}
	return (output);
}
