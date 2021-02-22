#include "holberton.h"

/**
 * _strchr - function that fills memory with a constant byte.
 * @s: destenation of string
 * @c: character to replace
 *
 * Return: a pointer to the resulting string
 */

char *_strchr(char *s, char c)
{
	unsigned int j = 0;

	for (; s[j] != '\0' && s[j] != c; j++)
	{
		break;
	}
	if (s[i] == c)
		return (s + i);
	else
		return(NULL);
}
