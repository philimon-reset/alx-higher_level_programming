#include "holberton.h"

/**
 * malloc_checked - function to allocate memory
 * @b: size of memeory
 *
 * Return: pointer to allocated memory
 */

char *malloc_checked(unsigned int b)
{
	int j = 0, n = 0;
	char *s;

	if (b == INT_MAX)
	{
		return (98);
	}
	s = malloc(sizeof(char) * b);
	else
		return (NULL);
	return (s);
}
