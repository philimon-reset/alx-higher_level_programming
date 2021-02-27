#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: destenation of string
 * @accept: characters to check
 *
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int j = 0, output = 0;

	for (; s[j] != '\0'; j++)
	{
		if (_strchr(accept, s[j]) == NULL)
		{
			break;
		}
		output++;
	}
	return (output);
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
