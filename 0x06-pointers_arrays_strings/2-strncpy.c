#include "holberton.h"

/**
 * _strncpy - function that copys two strings
 * @dest: destenation of addition
 * @src: string to be added
 * @n: size of bytes to be used
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i, j, v, output = 0, output2 = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		output += 1;
	}
	for (v = 0; src[v] != '\0'; v++)
	{
		output2 += 1;
	}
	if (output2 > n)
	{
		for (j = 0; j < n && src[j] != '\0'; j++)
		{
			dest[j] = src[j];
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			dest[j] = '\0';
		}
		dest[output + j] = '\0';
	}
	return (dest);
}
