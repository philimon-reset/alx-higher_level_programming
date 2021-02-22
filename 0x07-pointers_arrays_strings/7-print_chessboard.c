#include "holberton.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: array
 *
 * Return: void function
 */

void print_chessboard(char (*a)[8])
{
	unsigned int j = 0, i = 0;

	for (; j < 8; j++)
	{
		for (; i < 8; i++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
