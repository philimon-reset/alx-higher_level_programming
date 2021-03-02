#include "holberton.h"

/**
 * argstostr - function to create array
 * @ac: size of array
 * @av: specific char to initaliize
 *
 * Return: NULL if size 0
 */

char *argstostr(int ac, char **av)
{
	int j = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	str = malloc(sizeof(char) * size);
        else if (str != NULL)
	{
		for (; j < size; j++)
		{
			str[j] = 'H';
		}
		return (str);
	}
	else
		return (NULL);
	return (str);
}
