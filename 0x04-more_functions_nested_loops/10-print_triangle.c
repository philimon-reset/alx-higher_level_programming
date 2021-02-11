#include "holberton.h"

/**
 * print_triangle - prints triangle in terminal
 * @size: size of triangle
 *
 * Return: void function
 */
void print_triangle(int size)
{
	int i, j, l;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < size - i; j++)
			{
				_putchar(' ');
			}
			for (l = 0; l <= i; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
