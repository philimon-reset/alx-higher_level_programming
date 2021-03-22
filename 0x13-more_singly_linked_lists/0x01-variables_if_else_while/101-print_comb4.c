#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int l, a, e;

	for (l = 48; l <= 57; l++)
	{
		for (a = l + 1; a <= 57; a++)
		{
			for (e = a + 1; e <= 57; e++)
			{
				putchar(l);
				putchar(a);
				putchar(e);
		if (l != 55 || a != 56 || e != 57)
		{
		putchar(44);
		putchar(32);
		}
		}
		}
	}
	putchar('\n');
	return (0);
}
