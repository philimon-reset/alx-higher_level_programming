#include "holberton.h"

/**
 * puts_half - prints half of a string to stdout
 * @str: string to be printed
 *
 * Return: void
 **/
void puts_half(char *str)
{
	int length = _strlen(str);

	if (length > 0)
	{
		if (length % 2 == 0)
		{
			length /= 2;
		}
		else
		{
			length  = (length - 1) / 2;
		}
		while (str[length] != '\0')
		{
			_putchar(str[length]);
			length++;
		}
	}
	_putchar('\n');
}

/**
 * _strlen - counts the length of a string
 * @s: string to  be counted
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0, i = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
