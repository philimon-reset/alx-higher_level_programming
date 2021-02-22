#include "holberton.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: destenation of string
 * @needle: string to be checked with
 *
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int j = 0;
	int  len = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (haystack[j] != '\0')
	{
		int i = 0;

		if (haystack[j] == needle[0])
		{
			while (needle[i] != '\0')
			{
				if (haystack[i + j] != needle[i])
				{
					len = 0;
					break;
				}
				else
					len = 1;
				i++;
			}
			if (len)
				break;
		}
		j++;
	}
	if (len)
		return (haystack + j);
	else
		return (NULL);
}
