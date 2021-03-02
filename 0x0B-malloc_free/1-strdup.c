#include "holberton.h"

/**
 * create_array - function to create array
 * @str: 
 *
 * Return: NULL if size 0
 */

char *_strdup(char *str)
{
	int j = 0, n = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[n])
	{
		n += 1;
	}
	s = malloc(sizeof(char) * (n + 1));
        else if (s != NULL)
	{
		for (; j <= n; j++)
		{
			s[j] = str[j];
		}
		s[j] = '\n';
	}
	else
		return (NULL);
	return (s);
}
