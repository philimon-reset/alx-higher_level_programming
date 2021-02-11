#include "holberton.h"

/**
 * print_diagonal - prints diagonal line in terminal
 *
 * @n: number of times \ is used
 * Return: void functions
 */
void print_numbers(int n)
{
	int a = n, j;

	if (n > 0)
	{
		while (n > 0)
		{
			for (i = a - n, i > 0; i--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			n--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
