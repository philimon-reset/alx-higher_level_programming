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
		for (; j < argc; j++)
		{
			if (checker(argv[j]))
				sum += atoi(argv[j]);
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
 * checker - check if its letter
 * @c: checker character
 *
 * Return: 0 if found in range 1 if not
 */
int checker(char *c)
{
	while (*c)
	{
		if ((*c >= 65 && *c <= 90) || (*c >= 97 && *c <= 122))
			return (0);
		c++;
	}
	return (1);
}
