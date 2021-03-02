#include "holberton.h"

/**
 * str_concat - function to concatinate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL if size 0
 */

char *str_concat(char *s1, char *s2)
{
	int j = 0;
	char *str;

	if (s1 == 0)
		return (NULL);
	str = malloc(sizeof(s1) + sizeof(s2) + 1);
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
	return (0);
}
