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
	int var;
	

	for (var = 0; *(src + var) != '\0'; var++)
	{
		*(dest + var) = *(src + var);
	}
	_putchar('\n');
}
