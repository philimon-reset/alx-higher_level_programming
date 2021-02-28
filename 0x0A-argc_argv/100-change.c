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
	int a;
	int coin[5] = {25, 10, 5, 2, 1};
	int i = 1, n = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	if (a < 0)
		printf("0\n");

	else if (argc == 2)
	{
		while (a >= 25)
		{
			n++;
			a = a - 25;
		}

		while (a > 0)
		{
			if (coin[i] <= a)
			{
				n++;
				a = a - coin[i];
			}
			if (coin[i + 1] <= a)
			{
				n++;
				a = a - coin[i + 1];
			}
			if (coin[i + 2] <= a)
			{
				n++;
				a = a - coin[i + 2];
			}
			if (coin[i + 3] <= a)
			{
				n++;
				a = a - coin[i + 3];
			}
			a--;
		}
	}
	printf("%d", n);
	return (0);
}
