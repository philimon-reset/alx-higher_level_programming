#include "holberton.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destenation of string
 * @src: memory area
 * @n: size of bytes to be used
 *
 * Return: a pointer to the resulting string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	for (; j < n && dest[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
