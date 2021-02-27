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
	int sum = 0;

	if (argc > 1)
	{
		while (--argc > 0)
		{
			if (checker(argv[argc]))
				sum += atoi(argv[argc]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * checker - check if didigt
 *
 * @c: charcter checked if its digit
 * Return: 1 if its digit
 * 0 if not
 */
int checker(char *c)
{
	while (*c != '\n')
	{
		if ((*c >= 'A' && *c <= 'Z') || (*c >= 'a' && *c <= 'z'))
			return (0);
		c++;
	}
	return (1);
}
