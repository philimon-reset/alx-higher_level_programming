#include "holberton.h"

/**
 * print_to_98 - prints n to 98
 *
 * @n: start of number
 * Return: void function
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(32);
		n++;
	}
	}
	else if (n > 98)
	{
		while (n > 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(32);
		n--;
	}
}
