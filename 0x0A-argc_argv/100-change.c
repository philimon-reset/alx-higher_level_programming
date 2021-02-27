#include "holberton.h"

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	int sum;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	
	sum = atoi(argv[1]);
	if (sum < 0)
		printf("0\n");
	else
		return (greed(sum));
	
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
	int i = 0, n, amount = 0;
	
	while (i < 4)
	{
		if (coin[i] <= a)
		{
			n = a / coin[i];
			a = a - n * coin[i];
			n += n;
		}
		i++;
	}
	return (n);
}
