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
	int sum;
	int coin[5] = {25, 10, 5, 2, 1};
	int i = 0, n = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]);

	while (i < 5)
	{
		if (sum >= coin[i])
		{
			n++;
			sum = sum - coin[i];
		}
		i++;
	}
	printf("%d\n", n);
	return (0);
}
