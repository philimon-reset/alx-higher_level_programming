#include "3-calc.h"

/**
 * main - main function
 *
 * Return: return opertation
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	if (get_op_func == 0)
	{
		printf("Error");
		exit(99);
	}
	if (((argv[2] == '/') || (argv[2] == '%')) && (argv[3] == 0))
	{
		printf("Error");
		exit(100);
	}
	i = get_op_func(atoi(argv[1]),atoi(argv[3]));
	printf("%d\n", i);
}
