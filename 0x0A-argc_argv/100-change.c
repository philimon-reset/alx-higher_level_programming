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

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	for (n = 0; a > 0; n++)
	{
		if (a - 25 >= 0)
			a = a - 25;
		else if (a - 10 >= 0)
			a = a - 10;
		else if (a - 5 >= 0)
			a = a - 5;
		else if (a - 2 >= 0)
			a = a - 2;
		else if (a - 1 >= 0)
			a = a - 1;
	}
	printf("%d\n", n);
	return (0);
}
