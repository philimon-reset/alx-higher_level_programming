#include "holberton.h"

/**
 * main - print table
 * @n: number used for table
 *
 * Return: void
 */
void print_tables(int n)
{
	char i;
	int j, cont;

	if (n <= 15 && n >= 0)
	{
		for (j = 0; j <= n; j++)
		{
			for (i = 0; i <= n; i++)
			{
				cont = j * i;
				if (cont > 99)
				{
					_putchar(cont / 100 + '0');
					_putchar(cont / 10 + '0');
				}
				else if (cont > 9 && cont <= 99)
				{
					_putchar(cont / 10 + '0');
				}
				_putchar(cont % 10 + '0');
				else if (i < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			if (j < n)
			{
				_putchar(10);
			}
		}
	}
}

