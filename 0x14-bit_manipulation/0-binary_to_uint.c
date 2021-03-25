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
	int i;

	base = 1;
	if (!check_valid_string(b))
		return (0);
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

/**
 * check_valid_string - checks if a string has only 0's and 1's
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int check_valid_string(const char *b)
{
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}
