#include "holberton.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: destenation of string
 * @needle: string to be checked with
 *
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle);
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
