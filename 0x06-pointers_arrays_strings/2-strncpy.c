#include "holberton.h"

/**
 * _strncpy - function that copys two strings
 * @dest: destenation of addition
 * @src: string to be added
 * @n: size of bytes to be used
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for (; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
