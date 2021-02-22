#include "holberton.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: array
 *
 * Return: void function
 */

void print_chessboard(char (*a)[8])
{
	unsigned int j = 0;

	for (; j < 8; j++)
	{
		int i = 0;
		for (; i < 8; i++)
		{
			_putchar(a[j][i]);
		}
		_putchar('\n');
	}
}
