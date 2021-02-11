#include "holberton.h"

/**
 * main - prints triangle in terminal
 *
 * @size: size of triangle
 * Return: void functions
 */
int main(void)
{
	int size, i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = 1; j <= i; ++j)
			{
				printf(" ");
			}
			printf("#");
			printf("\n");
		}
	}
	}
	else
	{
		printf("\n");
	}
	printf("\n");
	return (0);
}
