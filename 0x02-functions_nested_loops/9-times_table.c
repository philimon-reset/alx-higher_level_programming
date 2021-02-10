#include "holberton.h"

/**
 * times_table - print multiplication table
 * @a: first digit
 * @b: second digit
 * Return: void function
 */
void times_table(void)
{
	int a = 0, b = 0, l;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			l = a * b;
			if (b == 0)
			{
				_putchar('0');
			}
			else if (!(l > 9))
			{
				_putchar(32);
				_putchar(32);
				_putchar(44);
				_putchar(l + '0');
			}
			else if (l > 9)
			{
				_putchar(32);
				_putchar(44);
				_putchar(l / 10 + '0');
				_putchar(l % 10 + '0');
			}
		}
	}
	printf("\n");
}
