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
	int output = "", i;

	for (i = 0; i <= 100; i++)
		{
    if (i % 3)
    {
      output += "Fizz";
    }
    else if (i % 5)
    {
      output += "Buzz";
    }
    else if (output == "")
    {
      output = i;
    }
    printf(output);
  }
	printf("\n");
	return (0);
}
