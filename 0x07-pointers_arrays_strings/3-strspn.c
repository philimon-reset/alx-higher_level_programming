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
	unsigned int j = 0, output = 0;

	for (; s[j] != '\0' && s[j] != accept[j]; j++)
	{
		continue;
	}
	if (s[j] == accept[j])
	{
		output++;
	}
	return (output);
}
