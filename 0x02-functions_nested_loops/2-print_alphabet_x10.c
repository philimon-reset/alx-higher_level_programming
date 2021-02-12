#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet a to z ten times
 *
 * Return: null
 */
void print_alphabet_x10(void)
{
	char l;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar(10);
	}
}
