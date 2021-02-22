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
	int j = 0, i = 0;
	size_t  len = 0;

	for (; needle[i] != '\0')
	{
		len += 1;
	}
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			if (!_strcmp(haystack, needle))
			{
				return ((char *)haystack);
			}
			haystack++;
		}
		return (NULL);
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

/**
 * _strcmp - function compares two strings
 * @s1: destenation
 * @s2: string to be compared
 *
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int j = 0, var = 0;

	while (1)
	{
		if (s1[j] == '\0' && s2[j] == '\0')
		{
			break;
		}
		else if (s1[j] != s2[j])
		{
			var = s1[j] - s2[j];
			break;
		}
		else if (s1[j] == '\0')
		{
			var = s2[j];
			break;
		}
		else if (s2[j] == '\0')
		{
			var = s1[j];
			break;
		}
		else
		{
			j++;
		}
	}
	return (var);
}
