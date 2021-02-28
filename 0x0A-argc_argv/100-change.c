#include "holberton.h"

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a;
	int coin[4] = {25, 10, 5, 1};
	int i = 1, n = 0;

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

	while (i < 4)
	{
		if (coin[i] <= a)
		{
			n++;
			a = a - n * coin[i];
		}
		i++;
	}
	printf("%d", n);
	return (0);
}
