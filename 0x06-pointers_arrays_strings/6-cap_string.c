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
	char arr[] = {',', ';', '.', '!', '?', '"', '(', ')', '{',
		      '}', '\t', '\n', ' '};

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -= 32;
		i++;
	}
	while (s[i] != '\0')
	{
		
	}
}

