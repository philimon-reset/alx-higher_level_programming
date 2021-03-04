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
	int j = 1, i;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * max);
	if (array != NULL)
	{
		array[0] = min;
		for (; j <= max; j++)
		{
			array[j] = min + 1
		}
	}
	else
		return (NULL);
	return (array);
}
