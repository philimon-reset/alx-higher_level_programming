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
	char *s;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size > old_size)
	{
		
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
	{
		for (; j < new_size; j++)
		{
			s[j] = ptr[j]
		}
	}
	else
		return (NULL);
	return (s);
}
