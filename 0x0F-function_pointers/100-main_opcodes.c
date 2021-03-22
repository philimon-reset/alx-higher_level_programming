#include "function_pointers.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument
 * Return: return opertation
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
