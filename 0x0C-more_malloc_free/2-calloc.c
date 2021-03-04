#include "holberton.h"

/**
 * calloc - function that allocates memory for an array
 * @nmemb: number of elements to be allocated
 * @size: size
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int j = 0, i = nmemb * size;
	int *array;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array != NULL)
	{
		for (; j < i; j++)
		{
			array[j] = 0;
		}
	}
	else
		return (NULL);
	return (array);
}
