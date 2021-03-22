#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: captitalized letter
 *
 * Return: void function
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	while (s[i] != '\0')
	{
		if (is_separator(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}
	return (s);
}
/**
 * is_separator - if word separator
 * @c: char to be checked
 *
 * Return: 1 if true
 */
int is_separator(char c)
{
	char arr[13] = {',', ';', '.', '!', '?', '"', '(', ')', '{',
		      '}', '\t', '\n', ' '};
	int a = 0, var = 0;

	for (; a < 13; a++)
	{
		if (c == arr[a])
			var = 1;
	}
	return (var);
}
