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

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]);
	for (n = 0; sum > 0; n++)
	{
		if (sum - 25 >= 0)
			sum = sum - 25;
		else if (sum - 10 >= 0)
			sum = sum - 10;
		else if (sum - 5 >= 0)
			sum = sum - 5;
		else if (sum - 2 >= 0)
			sum = sum - 2;
		else if (sum - 1 >= 0)
			sum = sum - 1;
	}
	printf("%d\n", sum);
	return (0);
}
