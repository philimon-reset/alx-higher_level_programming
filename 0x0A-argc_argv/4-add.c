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
	int j = 1, sum = 0;

	if (argc > 1)
	{
		if (atoi(argv[j]) != 0)
		{
			for (; j < argc; j++)
			{
				sum += atoi(argv[j]);
			}
			printf("%d\n", sum);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
