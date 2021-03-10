#include "calc.h"

/**
 * main - main function
 *
 * Return: return opertation
 */

int main(int argc, char **argv)
{
	char i;

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
	if (argv[argc] != 4)
	{
		printf("Error");
		exit(100);
	}
	printf("%d\n", atoi(get_op_func));
}
