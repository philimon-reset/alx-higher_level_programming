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
	int j = 0;

	for (; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
