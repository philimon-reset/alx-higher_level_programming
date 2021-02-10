#include "holberton.h"
#include <stdio.h>
/**
 * main - print the first 50 fibonacci characters
 *
 * Return: 0 if success
 */
int main(void)
{
	int c;
	long a = 0, b = 1, fibonacci;

	for (c = 1; c <= 50; c++)
	{
		fibonacci = a + b;
		if (c < 50)
		{
			printf("%ld, ", fibonacci);
		}
		else
		{
			printf("%ld", fibonacci);
		}
		a = b;
		b = fibonacci;
	}
	printf("\n");
	return (0);
}
