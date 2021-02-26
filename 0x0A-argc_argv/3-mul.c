#include "holberton.h"

/**
 * main: main function
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0
 */

int main(int argc, char** argv)
{
	int j = 0, sum = 0;

	if (argc > 1)
	{
		for (; j < argc; j++)
		{
			printf("%s\n", argv[j]);
			sum *= atoi(argv[j]);
		}
		printf("%d", sum);
	}
	return (0);
}
