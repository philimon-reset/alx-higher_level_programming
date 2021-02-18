#include "holberton.h"

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
