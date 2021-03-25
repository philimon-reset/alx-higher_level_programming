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
	int base, i;

	base = 1;
	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			n += base;
			base *= 2;
		}
	}
	return (n);
}

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int var;
	int output = 0;

	for (var = 0; s[var] != '\0'; var++)
	{
		output += 1;
	}
	return (output);
}
