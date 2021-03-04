#include "holberton.h"

/**
 * malloc_checked - function to allocate memory
 * @b: size of memeory
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
