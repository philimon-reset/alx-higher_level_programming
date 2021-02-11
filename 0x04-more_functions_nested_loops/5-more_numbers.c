#include "holberton.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: void function
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
