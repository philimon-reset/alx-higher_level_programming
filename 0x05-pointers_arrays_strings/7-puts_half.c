#include "holberton.h"

/**
 * puts_half - print second half of the string
 * @str: string to be printed
 *
 * Return: void funtion
 **/
void puts_half(char *str)
{
	int var, lent;

	lent = _strlen(str);
	if (lent % 2 == 0)
	{
		var = lent / 2;
	}
	else
	{
		var = (lent + 1) / 2;
	}
	while (str[var] != '\0')
	{
		_putchar(str[var]);
	}
	_putchar('\n');
}

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 **/
int _strlen(char *s)
{
	int var;
	int output = 0;

	for (var = 0; s[var] != '\0'; var++)
	{
		output += 1;
	}
	return (output);
}
