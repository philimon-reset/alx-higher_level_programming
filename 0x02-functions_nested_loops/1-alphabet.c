#include "holberton.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: null
 */
void print_alphabet(void);
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar(10);
}
