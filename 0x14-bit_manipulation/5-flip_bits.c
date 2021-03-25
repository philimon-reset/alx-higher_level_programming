#include "holberton.h"

/**
 * flip_bits - number of bits needed to flip one number to another
 * @n: character
 * @m: second character
 *
 * Return: number at index
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a = n ^ m;
	int len;

	while (a)
	{
		if ((a >> 1) == 1)
			len++;
		a >> 1;
	}
	return (len);
}
