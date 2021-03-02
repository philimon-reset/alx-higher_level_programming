#include "holberton.h"

/**
 * strtow - function to split string to words
 * @str: string
 *
 * Return: NULL if size 0
 */

char **strtow(char **str)
{
	int a = 0, j, len = 0, i = ac, sub = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac--)
		len += (_strlen(av[ac]) + 1);
	str = malloc(len + 1);
	if (str != NULL)
	{
		while (a < i)
		{
			for (j = 0; av[a][j] != '\0'; j++)
				str[j + sub] = av[a][j];
			str[sub + j] = '\n';
			sub += (j + 1);
			a++;
		}
		str[sub] = '\0';
	}
	else
		return (NULL);
	return (str);
}

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int var;
	int output = 0;

	if (s != NULL)
	{
		for (var = 0; s[var] != '\0'; var++)
		{
			output += 1;
		}
	}
	return (output);
}
