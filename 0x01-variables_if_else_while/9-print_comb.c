#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int l;

	l = 48;
	while (l <= 57)
	{
		putchar(l);
		if (l <= 56)
		{
		putchar(44);
		putchar(32);
		}
		l = l + 1;
	}
	putchar('\n');
	return (0);
}
