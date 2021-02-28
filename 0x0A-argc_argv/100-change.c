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
	int a, i = 1, n;
	int coin[5] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
		printf("0\n");
	while (a >= 25)
	{
		n++;
		a = a - 25;
	}
	for (n = 0; a > 0; n++)
	{
		if (coin[i] <= a)
		{
			a = a - coin[i];
		}
		if (coin[i + 1] <= a)
		{
			a = a - coin[i + 1];
		}
		if (coin[i + 2] <= a)
		{
			a = a - coin[i + 2];
		}
		if (coin[i + 3] <= a)
		{
			a = a - coin[i + 3];
		}
	}
	printf("%d\n", n);
	return (0);
}
