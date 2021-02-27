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
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

/**
 * _isdigit - check if didigt
 *
 * @c: charcter checked if its digit
 * Return: 1 if its digit
 * 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
