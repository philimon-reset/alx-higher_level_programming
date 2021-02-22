#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: array
 * @size: size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, len1 = 0, len2 = 0;

	for (; i < size * size; i += size)
	{
		len1 += a[i + j];
		len2 += a[i + (size - 1) - j];
		j++;
	}
	printf("%d, %d\n", len1, len2);
}
