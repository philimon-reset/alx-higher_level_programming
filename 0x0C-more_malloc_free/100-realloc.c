#include "holberton.h"

/**
 * _realloc - function that allocates memory for an array
 * @ptr: number of elements to be allocated
 * @old_size: size
 * @new_size: 
 *
 * Return: pointer to allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int j = 0, i;
	int *s;

	if (old_size == new_size)
		return (ptr);
	ptr = malloc(new_size);
	s = malloc(old_size);
	if (ptr == NULL)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
		return (NULL);
	ptr = malloc();
	if (ptr != NULL)
	{
		
	}
	else
		return (NULL);
	return (pte);
}
