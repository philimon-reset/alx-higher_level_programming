#include "holberton.h"

/**
 * print_to_98 - 
 *
 *@n: character to be checked
 * Return: 1 if greater than 0
 * 0 if equal to 0
 * -1 if less than zero
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(32);
		n++;
	}
	}
	else if (n > 98)
	{
		while (n > 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(32);
		n--;
	}
}
