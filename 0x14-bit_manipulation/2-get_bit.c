#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: character
 *
 * Return: void function
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: character
 * @index: index needed
 *
 * Return: number at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *a = print_binary(n);
	int len = 0;

	while (a)
		len++;
	if (index > len)
		return (-1);
	return ((n >> index) & 1);
	
}
