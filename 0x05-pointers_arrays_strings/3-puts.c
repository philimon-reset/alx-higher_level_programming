#include "holberton.h"

/**
 * _puts - print character to stdout
 * @str: string to be printed
 *
 * Return: void funtion
 **/
void _puts(char *str)
{
	int var = 0;
	
	while (str[var] != '\0')
	{
		_putchar(str[var]);
		var++;
	}
	_putchar('\n');
}
