#include "holberton.h"
#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms in the fibonacci
 *
 * Return: 0 if success
 */
int main(void)
{
	long a = 1, b = 2, sum = 2, fibonacci;

	while (fibonacci <= 4000000)
	{
		fibonacci = a + b;
		if (fibonacci % 2 == 0)
		{
			sum = sum + fibonacci;
		}
		a = b;
		b = fibonacci;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
