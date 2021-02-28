#include "holberton.h"

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0
 */

int main(int argc, char **argv))
{
	int sum;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	
	sum = atoi(argv[1]);
	if (sum < 0)
	{
		printf("0\n");
	}
	printf("%d", greed(sum));
	return (0);
	
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0
 */

int greed(int a)
{
	int coin[4] = {25, 10, 5, 1};
	int i = 0, n = 0;
	
	while (a >= 25)
	{
		n++;
		a = a - 25;
	}
	
	while (a > 0)
	{
		if (a >= 10)
		{
			n++;
			a = a - 10;
		}
		if (a >= 5)
		{
			n++;
			a = a - 5
		}
		if (a >= 1)
		{
			n++;
			a = a - 1;
		}
		i++;
	}
	return (n);
}
