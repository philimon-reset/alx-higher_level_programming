#include "holberton.h"

/**
 * swap_int - swap integers of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: void funtion
 */

void reset_to_98(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
