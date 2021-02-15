#include "holberton.h"

/**
 * print_rev - print in reverse
 * @s: string to be reversed
 *
 * Return: void funtion
 **/
void print_rev(char *s)
{
	int var;

	lent = _strlen(s);
	for (var = lent - 1; var >= 0; var--)
	{
		_putchar(s[var]);
	}
	_putchar('\n');
}
