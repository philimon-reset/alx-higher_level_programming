#include "holberton.h"
/**
 * times_table - print multiplication table
 * @a: first digit
 * @b: second digit
 * Return: void function
 */
void times_table(void)
{
	int a = 0, b = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			if (b == 0)
			{
				_putchar('0');
			}
			else if (!(a * b > 9))
			{
				_putchar(32);
				_putchar(32);
				_putchar(44);
				_putchar('0' + a * b);
			}
			else if (a * b > 9)
			{
				_putchar(32);
				_putchar(44);
				_putchar('0' + a * b);
			}
		}
	}
	printf("\n");
}
