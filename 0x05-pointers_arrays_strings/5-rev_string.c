#include "holberton.h"

/**
 * rev_string - print in reverse
 * @s: string to be reversed
 *
 * Return: void funtion
 **/
void rev_string(char *s)
{
	int var = 0, lent;

	lent = _strlen(s) - 1;

	while (lent > var)
	{
		/* what are youuuuu*/
		swap_char(s + lent, s + var);
		lent--;
		var++;
	}
	_putchar('\n');
}

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 **/
int _strlen(char *s)
{
	int var;
	int output = 0;

	for (var = 0; s[var] != '\0'; var++)
	{
		output += 1;
	}
	return (output);
}

/**
 * swap_int - swap integers of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: void funtion
 */

void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
