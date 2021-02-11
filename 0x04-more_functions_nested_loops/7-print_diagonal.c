#include "holberton.h"

/**
 * print_diagonal - prints diagonal line in terminal
 * @n: number of times \ is used
 * 
 * Return: void functions
 */
void print_diagonal(int n)
{
	int a = n, j;

	if (n > 0)
	{
		while (n > 0)
		{
			for (j = a - n, j > 0; j--)
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
