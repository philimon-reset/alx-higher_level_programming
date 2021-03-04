#include "holberton.h"

/**
 * array_range - function to create array from min to max
 * @min: min value
 * @max: max value
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int j = 0, size;
	int *array;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	array = malloc(sizeof(*array) * size);
	if (array != NULL)
	{
		for (; j < size; j++)
		{
			array[j] = min;
			min++;
		}
	}
	else
		return (NULL);
	return (array);
}
