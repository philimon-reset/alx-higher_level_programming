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
	int j = 0, sum = 1;

	if (argc == 3)
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
