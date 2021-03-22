#include "holberton.h"

/**
 * infinite_add -  adds two numbers
 * @n1: first character
 * @n2: secondd character
 * @r:  buffer that the function will use to store the 
 * result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r);
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
	return (size_r);
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
