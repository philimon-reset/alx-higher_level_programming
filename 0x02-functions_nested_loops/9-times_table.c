#include "holberton.h"

/**
 * times_table - print multiplication table
 *
 * Return: void function
 */
void times_table(void)
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
