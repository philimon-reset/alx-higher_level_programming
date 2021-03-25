#include "holberton.h"

/**
 * flip_bits - number of bits needed to flip one number to another
 * @n: character
 * @m: index needed
 *
 * Return: number at index
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (n == NULL || (index > sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n = (n) | (1 << index);
	return (1);
}
