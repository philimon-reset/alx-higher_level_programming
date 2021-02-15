#include "holberton.h"

/**
 * _puts - print character to stdout
 * @str: string to be printed
 *
 * Return: void funtion
 */

void _puts(char *str)
{
	int var;

	var = *str;
	_putchar(var + '0');
}
