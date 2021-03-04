#include "holberton.h"

/**
 * malloc_checked - function to allocate memory
 * @b: size of memeory
 *
 * Return: pointer to allocated memory
 */

char *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
	{
		void exit (98);
	}
	return (s);
}
