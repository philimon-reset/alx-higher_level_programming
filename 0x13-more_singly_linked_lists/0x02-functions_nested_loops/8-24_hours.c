#include "holberton.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: void function
 */
void jack_bauer(void)
{
	int n;
	int j;

	for (n = 0; n <= 23; n++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar (n / 10 + '0');
			_putchar (n % 10 + '0');
			_putchar (':');
			_putchar (j / 10 + '0');
			_putchar (j % 10 + '0');
			_putchar('\n');
		}
	}
}
