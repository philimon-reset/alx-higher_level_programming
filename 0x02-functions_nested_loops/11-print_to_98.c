#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints n to 98
 *
 * @n: start of number
 * Return: void function
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
	{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n--;
	}
	}
	else
	{
		while (n <= 98)
	{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n++;
	}
	}
	printf("\n");
}
