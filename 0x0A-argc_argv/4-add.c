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
	int j, sum = 0;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			if (!atoi(argv[j]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[j]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
