#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: character
 *
 * Return: void function
 */

void print_binary(unsigned long int n)
{
	unsigned int n = 0;
	unsigned int base;
	int i, j;

	base = 1;
	for (i = 7; i >= 0; i--)
	{
		j = n >> i;
		if (j & '1')
		{
			_putchar(1 + '0');
		}
		_putchar(0 + '0');
	}
}
