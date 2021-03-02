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
	int j = 0, i = 0, a = _strlen(s1), b = _strlen(s2);
	char *str = NULL;

	str = malloc(a + b + 1);
	if (str != NULL)
	{
		for (; j < a; j++)
		{
			str[j] = s1[j];
		}
		for (; i <= b; i++)
		{
			str[i + j] = s2[i];
		}
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
