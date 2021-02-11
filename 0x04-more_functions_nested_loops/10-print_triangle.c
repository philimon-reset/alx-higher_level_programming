#include "holberton.h"

/**
 * main - prints triangle in terminal
 *
 * @size: size of triangle
 * Return: 0
 */
int main(void)
{
	int size, i, j;

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
