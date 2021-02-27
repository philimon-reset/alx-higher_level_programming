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
		for (; j < argc; j++)
		{
			sum *= atoi(argv[j]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
