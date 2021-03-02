#include "holberton.h"

/**
 * create_array - function to create array
 * @size: size of array
 * @c: specific char to initaliize
 *
 * Return: NULL if size 0
 */

char *create_array(unsigned int size, char c)
{
	int j = 0;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
        else if (str != NULL)
	{
		for (; j < size; j++)
		{
			str[j] = c;
		}
		return (str);
	}
	else
		return (NULL);
	return (0);
}
