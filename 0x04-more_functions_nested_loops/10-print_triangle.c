#include "holberton.h"

/**
 * print_triangle - prints triangle in terminal
 *
 * @size: size of triangle
 * Return: void function
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = 1; j <= i; ++j)
			{
				_putchar(" ");
			}
			_putchar("#");
			_putchar("\n");
		}
	}
	}
	else
	{
		_putchar("\n");
	}
}
