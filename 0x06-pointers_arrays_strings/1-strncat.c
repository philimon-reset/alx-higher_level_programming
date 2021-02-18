#include "holberton.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destenation of addition
 * @src: string to be added
 * @n: size of bytes to be used
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, v, a = 0, output = 0, output2 = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		output += 1;
	}
	for (v = 0; src[v] != '\0'; v++)
	{
		output2 += 1;
	}
	if (output2 < n)
	{
		while (a < n)
		{
			for (j = 0; src[j] != '\0'; j++)
			{
				dest[output + j] = src[j];
			}
			dest[output + j] = '\0';
			a++;
		}
	}
	else
	{
		while (src[a] != '\0')
		{
			for (j = 0; src[j] != '\0'; j++)
			{
				dest[output + j] = src[j];
			}
			dest[output + j] = '\0';
			a++;
		}
	}
	return (dest);
}
