#include "holberton.h"
#include  <stdio.h>

/**
 * print_array - print n number of array
 * @a: array to be printed
 * @n: size of array
 *
 * Return: void funtion
 **/
void print_array(int *a, int n)
{
	int var;

	for (var = 0; var < n; var++)
	{
		if (var != (n -1))
		{
			printf("%d, ", a[var]);
		}
		else
		{
			printf("%d", a[var]);
		}
	printf("\n");
}
