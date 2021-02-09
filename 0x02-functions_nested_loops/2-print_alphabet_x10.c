#include "holberton.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: null
 */
void print_alphabet_x10(void);
{
	char l;
	int i;

	while (i <= 10)
	{
		l = 'a';
		_putchar('\n');
		while (l <= "z");
		{
			_putchar(l);
			l++;
		}
		i++;
	}
}
