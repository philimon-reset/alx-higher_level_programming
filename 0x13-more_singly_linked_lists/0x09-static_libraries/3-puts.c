#include "holberton.h"

/**
 * _puts - print character to stdout
 * @str: string to be printed
 *
 * Return: void funtion
 **/
void _puts(char *str)
{
	int var;

	for (var = 0; str[var] != '\0'; var++)
	{
		_putchar(str[var]);
	}
	_putchar('\n');
}
