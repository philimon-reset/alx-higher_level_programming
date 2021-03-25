#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: character
 * @index: index needed
 *
 * Return: number at index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;

	if (n == NULL || (index > sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n = *n & ~mask;
	return (1);
}
