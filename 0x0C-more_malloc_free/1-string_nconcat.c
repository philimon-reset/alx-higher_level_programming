#include "holberton.h"

/**
 * str_concat - function to concatinate two strings
 * @s1: first string
 * @s2: second string
 * @n: size of init s2
 *
 * Return: NULL if size 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int j = 0, i = 0, a = _strlen(s1), b = _strlen(s2);
	char *str;

	str = malloc(a + n + 1);
	if (str != NULL)
	{
		for (; j < a; j++)
		{
			str[j] = s1[j];
		}
		for (; i < n; i++)
		{
			str[i + j] = s2[i];
		}
		str[i + j] = '\0';
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
