#include "holberton.h"

/**
 * print_line - prints line in the teminal
 *
 * @n: number of times _ is used
 * Return: void functions
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
