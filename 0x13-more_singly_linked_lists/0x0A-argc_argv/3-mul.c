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

	if (argc == 3)
	{
		sum = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
