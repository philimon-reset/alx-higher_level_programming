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
	long a;
	long b;
	long fibonacci;

	while (c <= 49)
	{
		fibonacci = a + b;
		if (c < 49)
		{
			printf("%d, ", fibonacci);
		}
		else
		{
			printf("%d", fibonacci);
		}
		a = b;
		b = fibonacci;
		c++;
	}
	printf("\n");
	return (0);
}
