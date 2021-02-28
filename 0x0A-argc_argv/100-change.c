#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum, n;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]);
	if (sum > 0)
		printf("0\n");
	while (a > 0)
	{
		if (a >= 25)
		{
			n++;
			a = a - 25;
		}
		else if (a >= 10)
		{
			n++;
			a = a - 10;
		}
		else if (a >= 5)
		{
			n++;
			a = a - 5;
		}
		else if (a >= 2)
		{
			n++;
			a = a - 2;
		}
		else if (a >= 1)
		{
			n++;
			a = a - 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
