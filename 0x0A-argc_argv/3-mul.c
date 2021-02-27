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
	int j = 1, sum = 1;

	if (argc < 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{
		printf("Error");
	}
	return (0);
}
