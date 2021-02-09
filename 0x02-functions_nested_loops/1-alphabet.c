#include "holberton.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: null
 */
void print_alphabet(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
