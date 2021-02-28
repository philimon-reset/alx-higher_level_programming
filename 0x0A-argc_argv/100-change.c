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
	for (n = 0; a > 0; n++)
	{
		if (a - coin[i] >= 0)
			a = a - coin[i];
		else if (a - coin[i + 1] >= 0)
			a = a - coin[i + 1];
		else if (a - coin[i + 2] >= 0)
			a = a - coin[i + 2];
		else if (a - coin[i + 3] >= 0)
			a = a - coin[i + 3];
		else if (a - coin[i + 4] >= 0)
			a = a - coin[i + 4];
	}
	printf("%d\n", n);
	return (0);
}
