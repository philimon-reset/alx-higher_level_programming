#include "holberton.h"

/**
 * @a: first integer
 * @b: secound integer
 * @c: third integer
 * largest - print the largest number
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= c && b >= a)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
