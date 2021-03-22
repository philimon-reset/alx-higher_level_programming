#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int l, a;

	for (l = 48; l <= 57; l++)
	{
		for (a = 48; a <= 57; a++)
		{
		putchar(l);
		putchar(a);
		if (l != 57 || a != 57)
		{
		putchar(44);
		putchar(32);
		}
		}
	}
	putchar('\n');
	return (0);
}
