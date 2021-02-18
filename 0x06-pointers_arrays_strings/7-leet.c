#include "holberton.h"

/**
 * leet - leet encoder
 * @str: check
 *
 * Return: address of the encoded string
 */
char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		s[i] = transform(s[i]);
		i++;
	}
	return (s);
}

/**
 * check - check
 * @c: char to be encoded
 *
 * Return: char
 */
char check(char a)
{
	char mapping_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char mapping_upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};
	int i = 0;
	char replacement = a;

	while (i < 8)
	{
		if (a == mapping_low[i] || a == mapping_upper[i])
		{
			replacement = i + '0';
			break;
		}
		i++;
	}
	return (replacement);
}
