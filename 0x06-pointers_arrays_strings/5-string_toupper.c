#include "holberton.h"

/**
 * string_toupper - to upper
 * @s: string to upper
 *
 * Return: s
 */

char *string_toupper(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] > 'a' && s[j] < 'z')
		{
			s[j] -= 32;
		}
		j++;
	}
	return (s);
}
