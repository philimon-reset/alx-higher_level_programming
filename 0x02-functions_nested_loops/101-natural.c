#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints n to 98
 *
 * @n: start of number
 * Return: void function
 */
int main()
{
	int n, sum = 0;
	for (n = 1024; n >= 0; n--)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d", sum);
	return (0);
}
