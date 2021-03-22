#include "3-calc.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument
 * Return: return opertation
 */

int main(int argc, char **argv)
{

	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if (((argv[2][0] == '/') || (argv[2][0] == '%')) && (argv[3][0] == 48))
	{
		printf("Error\n");
		exit(100);
	}
	p = get_op_func(argv[2]);
	printf("%d\n", p(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
