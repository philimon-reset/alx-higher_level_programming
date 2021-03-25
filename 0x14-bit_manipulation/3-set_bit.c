#include "holberton.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: character
 * @index: index needed
 *
 * Return: number at index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n = (*n) | (1 << index);
	return (1);
}
