#include "holberton.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: void function
 */
int get_endianness(void)
{
	int n = 1;

	if(*(char *) &n == 1)
	return (n);
}
