#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: destenation of string
 * @b: character to replace
 * @n: size of bytes to be used
 *
 * Return: a pointer to the resulting string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	for (; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
