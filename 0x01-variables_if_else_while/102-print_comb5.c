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

	for (l = 0; l <= 99; l++)
	{
		for (a = l + 1; a <= 99; a++)
		{
			putchar((l / 10) + '0');
			putchar((l % 10) + '0');
			putchar(32);
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
		if (l != 98 || a != 99)
		{
		putchar(44);
		putchar(32);
		}
		}
	}
	putchar('\n');
	return (0);
}
