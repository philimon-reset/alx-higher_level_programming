#include "holberton.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destenation of addition
 * @src: string to be added
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, output;

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; *(dest + j) != '\0'; j++)
		{
			if (*(dest + j) == '\0')
			{
				*(dest + j) = *(src);
			}
			
	}
}
