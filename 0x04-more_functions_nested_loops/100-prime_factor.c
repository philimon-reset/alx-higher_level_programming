#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * main - find the largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
        long n = 612852475143;
        int s = (int) sqrt(n);

        for (; s < n; s++)
        {
                if (n % s == 0)
                {
                        printf("%d", s);
                        break;
                }
        }
        printf("\n");
        return (0);
}
