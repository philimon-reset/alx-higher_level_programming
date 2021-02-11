#include "holberton.h"

/**
 * print_square - prints diagonal line in terminal
 *
 * @size: size of square
 * Return: void functions
 */
void print_square(int size)
{
	int i = size, j = size;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
    {
      for (j = 1; j <= size; j++)
      {
        _putchar('#');
      }
    }
	}
	else
	{
		_putchar('\n');
	}
}
