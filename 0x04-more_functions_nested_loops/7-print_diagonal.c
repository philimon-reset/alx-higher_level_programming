#include "holberton.h"

/**
 * print_diagonal - prints diagonal line in terminal
 *
 * @n: number of times \ is used
 * Return: void functions
 */
void print_numbers(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == i)
			{
				_putchar('\');
			}
	}
	_putchar('\n');
}
