#include "holberton.h"
#include <stdio.h>
/**
 * main - psum of multiples of 3 and 5
 *
 * Return: 0 if success
 */
int main()
{
	int n, sum = 0;
	for (n = 1023; n >= 0; n--)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d", sum);
	return (0);
}
