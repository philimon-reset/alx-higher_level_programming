#include "holberton.h"

/**
 * _strncmp - function compares two strings
 * @dest: destenation 
 * @src: string to be compared
 *
 * Return: difference
 */

char *_strncpy(char *dest, char *src)
{
	int j = 0, var = 0;

	while (1)
	{
		if (dest[j] != src[j])
		{
			var = dest[j] - src[j];
			break;
		}
		else if (dest[j] == '\0')
		{
			var = src[j];
			break;
		}
		else if (src[j] == '\0')
		{
			var = dest[j];
			break;
		}
		else
		{
			j++;
		}
	return (var);
}
