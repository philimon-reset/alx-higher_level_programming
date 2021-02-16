#include "holberton.h"

/**
 * _strcpy - copy string
 * @dest: destanation
 * @src: source of string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int var = 0;

	for (var = 0; *(src + var) != '\0'; var++)
	{
		*(dest + var) = *(src + var);
	}
	*(dest + var) = '\0';
	return (dest);
	_putchar('\n');
}
