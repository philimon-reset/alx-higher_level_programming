#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: destenation of string
 * @accept: string to be checked with
 *
 * Return: a pointer to the resulting string
 */

char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	for (; s[j] != '\0' && _strchr(accept, s[j]) == NULL; j++)
	{
		continue;
	}
	if (s[j] == '\0')
		return (NULL);
	else
		return (s + j);
}


/**
 * _strchr - function that fills memory with a constant byte.
 * @s: destenation of string
 * @c: character to replace
 *
 * Return: a pointer to the resulting string
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] != '\0' && s[j] != c; j++)
	{
		continue;
	}
	if (s[j] == c)
		return (s + j);
	else
		return (NULL);
}
