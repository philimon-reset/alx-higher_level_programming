#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]);
	while (sum > 0)
	{
		if (sum >= 25)
		{
			n++;
			sum = sum - 25;
		}
		else if (sum >= 10)
		{
			n++;
			sum = sum - 10;
		}
		else if (sum >= 5)
		{
			n++;
			sum = sum - 5;
		}
		else if (sum >= 2)
		{
			n++;
			sum = sum - 2;
		}
		else if (sum >= 1)
		{
			n++;
			sum = sum - 1;
		}
	}
	printf("%d\n", n);
	return (0);
}
