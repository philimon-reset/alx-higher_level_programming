#include "holberton.h"
#include <stdio.h>

/**
 * print_square - prints diagonal line in terminal
 *
 * @size: size of square
 * Return: void functions
 */
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			prinf("Fizz ")
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ")
		}
		else
		{
			printf("%d ", i)
		}
	}
	printf("\n");
	return (0);
}
