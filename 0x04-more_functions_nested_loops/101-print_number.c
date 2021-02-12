#include "holberton.h"

/**
 * print_number - print number in putchar
 *
 * @n: number to be printed
 * Return: void function
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
