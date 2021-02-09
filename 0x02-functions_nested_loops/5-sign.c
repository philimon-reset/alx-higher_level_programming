#include "holberton.h"

/**
 * print_sign - checks if greater, less than or equal to zero
 *@n: character to be checked
 *
 * Return: 1 if greater than 0
 * 0 if equal to 0
 * -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
