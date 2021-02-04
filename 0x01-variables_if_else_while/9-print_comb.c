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

	l = '0';
	while (l <= '9')
	{
		putchar(l);
		putchar(44);
		putchar(32);
		l = l + 1;
	}
	putchar(36);
	return (0);
}
